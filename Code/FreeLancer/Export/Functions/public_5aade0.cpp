#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aade0);
CLANG_FORWARD_PROC_SYMBOL(public_5aaee0);
CLANG_FORWARD_PROC_SYMBOL(public_5af7f0);
CLANG_FORWARD_PROC_SYMBOL(public_5af9c0);
CLANG_FORWARD_PROC_SYMBOL(public_5afb40);
CLANG_FORWARD_PROC_SYMBOL(public_5afbf0);
CLANG_FORWARD_PROC_SYMBOL(public_5afd50);

#define public_5aae10 _public_5aae10
#define public_5aae85 _public_5aae85
#define public_5aae9e _public_5aae9e
#define public_5aaea7 _public_5aaea7
#define public_5aaeb9 _public_5aaeb9

PROC_DECLARE(0x5aade0, internal_5aade0, public_5aade0);
extern "C" NAKED register_t __cdecl internal_5aade0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ds : [ecx+0x1DC]
        lea eax, ds:[ecx+0x1D8]
        push ebp
        mov ebp, dword ptr ds : [eax+8]
        push esi
        mov esi, ebp
        cmp esi, ebp
        push edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x10], ebx
        je public_5aae9e
        lea edi, ds:[ebx+0x40]
        nop 
        public_5aae10 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi-0x3C]
        call dword ptr ds : [public_5c6f9c]
        lea ecx, ds:[esi+0x14]
        push ecx
        lea ecx, ds:[edi-0x2C]
        call public_5af9c0
        lea edx, ds:[esi+0x28]
        push edx
        lea ecx, ds:[edi-0x18]
        call public_5af9c0
        lea eax, ds:[esi+0x3C]
        lea ecx, ds:[edi-4]
        cmp ecx, eax
        je public_5aae85
        mov ebx, dword ptr ds : [edi]
        push ebx
        call public_5afd50
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ebx
        push eax
        lea edx, ss:[esp+0x24]
        lea ebp, ds:[edi-4]
        push edx
        mov ecx, ebp
        call public_5afb40
        mov al, byte ptr ds : [esi+0x3D]
        mov byte ptr ds : [edi-3], al
        lea eax, ds:[esi+0x3C]
        push eax
        mov ecx, ebp
        call public_5afbf0
        mov ebx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x18]
        public_5aae85 : nop
        add ebx, 0x50
        add esi, 0x50
        add edi, 0x50
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], ebx
        jne public_5aae10
        mov eax, dword ptr ss : [esp+0x14]
        public_5aae9e : nop
        mov edi, dword ptr ds : [eax+8]
        cmp ebx, edi
        mov esi, ebx
        je public_5aaeb9
        public_5aaea7 : nop
        mov ecx, esi
        call public_5af7f0
        add esi, 0x50
        cmp esi, edi
        jne public_5aaea7
        mov eax, dword ptr ss : [esp+0x14]
        public_5aaeb9 : nop
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [public_5c6bc8]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
/*FIXUP push offset _public_5aaee0 @0x5aaec7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5aaee0
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5aade0)
    }
}

#undef public_5aae10
#undef public_5aae85
#undef public_5aae9e
#undef public_5aaea7
#undef public_5aaeb9
