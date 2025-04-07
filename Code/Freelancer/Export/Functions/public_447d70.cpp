#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446ca0);
CLANG_FORWARD_PROC_SYMBOL(public_447d70);
CLANG_FORWARD_PROC_SYMBOL(public_447ec0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);

#define public_447da3 _public_447da3
#define public_447da7 _public_447da7
#define public_447dc0 _public_447dc0
#define public_447dd2 _public_447dd2
#define public_447e00 _public_447e00
#define public_447ea3 _public_447ea3
#define public_447eb4 _public_447eb4

PROC_DECLARE(0x447d70, internal_447d70, public_447d70);
extern "C" NAKED register_t __cdecl internal_447d70()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        call public_4c4060
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], esi
        call public_4c4060
        mov ebx, dword ptr ds : [eax+4]
        cmp esi, ebx
        je public_447eb4
        mov edi, dword ptr ds : [public_5c603c]
        jmp public_447da7
        public_447da3 : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_447da7 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call edi
        add esp, 4
        test eax, eax
        je public_447dc0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xC
        je public_447dd2
        public_447dc0 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], esi
        jne public_447da3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        public_447dd2 : nop
        mov eax, dword ptr ss : [ebp+0x30]
        mov ebx, dword ptr ds : [eax+0xFC]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_5c69a0]
        mov edi, 1
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], edi
        jl public_447eb4
        lea ebx, ds:[ebx]
        public_447e00 : nop
        push edi
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_5cbe58 @0x447e05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe58
        push ecx
        call public_447ec0
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x74]
        add esp, 0xC
        push edx
        call dword ptr ds : [public_5c61c4]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_447ea3
        mov ebp, dword ptr ss : [ebp+0x74]
        mov eax, dword ptr ds : [esi+0xC]
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_5c6214]
        sub esp, 0x24
        mov esi, eax
        mov edi, esp
        add esi, 0x10
        mov ecx, 9
        rep movsd
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c6214]
        add eax, 4
        mov edx, dword ptr ds : [eax]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c61c0]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x48]
        push eax
        mov eax, dword ptr ds : [edx+0xA0]
        push 0xBF800000
        push ecx
        mov ecx, ebx
        imul ecx, 0x44
        add ecx, eax
        call public_446ca0
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x18]
        public_447ea3 : nop
        mov eax, dword ptr ss : [esp+0x24]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], edi
        jle public_447e00
        public_447eb4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x447d70)
    }
}

#undef public_447da3
#undef public_447da7
#undef public_447dc0
#undef public_447dd2
#undef public_447e00
#undef public_447ea3
#undef public_447eb4
