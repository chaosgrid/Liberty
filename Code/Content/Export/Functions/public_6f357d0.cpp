#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f35640);
CLANG_FORWARD_PROC_SYMBOL(public_6f357d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f357e1 _public_6f357e1
#define public_6f357f6 _public_6f357f6
#define public_6f35816 _public_6f35816
#define public_6f3584d _public_6f3584d
#define public_6f35861 _public_6f35861
#define public_6f3586c _public_6f3586c
#define public_6f3587f _public_6f3587f

PROC_DECLARE(0x6f357d0, internal_6f357d0, public_6f357d0);
extern "C" NAKED register_t __cdecl internal_6f357d0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f357f6
        public_6f357e1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_6ecfe80
        cmp esi, edi
        jne public_6f357e1
        public_6f357f6 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6f50650
        mov esi, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [eax+0x50]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f3587f
        push ebp
/*FIXUP public_6f35816 : nop
        push offset public_6fd0830 @0x6f35816*/
  FIXUP public_6f35816 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push esi
        call public_6f32480
        mov edx, dword ptr ss : [esp+0x24]
        mov ebp, eax
        push ebp
        push edx
        call public_6f35640
        add esp, 0x10
        test al, al
        je public_6f3586c
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f3584d
        mov edi, eax
        public_6f3584d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f35861
        mov dword ptr ds : [eax], ebp
        public_6f35861 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x20]
        inc eax
        mov dword ptr ds : [ebx+8], eax
        public_6f3586c : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x50]
        add esi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], esi
        jne public_6f35816
        pop ebp
        public_6f3587f : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f357d0)
    }
}

#undef public_6f357e1
#undef public_6f357f6
#undef public_6f35816
#undef public_6f3584d
#undef public_6f35861
#undef public_6f3586c
#undef public_6f3587f
