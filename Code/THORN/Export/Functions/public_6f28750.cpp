#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28750);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);

#define public_6f28766 _public_6f28766
#define public_6f28798 _public_6f28798
#define public_6f2879d _public_6f2879d
#define public_6f287d8 _public_6f287d8
#define public_6f287ea _public_6f287ea
#define public_6f287ef _public_6f287ef
#define public_6f28821 _public_6f28821
#define public_6f28826 _public_6f28826
#define public_6f28858 _public_6f28858
#define public_6f2885d _public_6f2885d

PROC_DECLARE(0x6f28750, internal_6f28750, public_6f28750);
extern "C" NAKED register_t __cdecl internal_6f28750()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, 1
        xor ebx, ebx
        public_6f28766 : nop
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f28798
        push esi
        call public_6f4b900
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], ebx
        fild qword ptr ss : [esp+0x14]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        call public_6f4b250
        jmp public_6f2879d
        public_6f28798 : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f2879d : nop
        push eax
        call public_6f4b410
        add esp, 4
        test eax, eax
        jne public_6f287d8
        inc edi
        cmp edi, 3
        jbe public_6f28766
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f287ea
        push esi
        call public_6f4b900
        push 0x3FF00000
        push ebx
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        jmp public_6f287ef
        public_6f287d8 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6f287ea : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f287ef : nop
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x10]
        push esi
        call public_6f4b440
        add esp, 8
        test eax, eax
        je public_6f28821
        push esi
        call public_6f4b900
        push 0x40000000
        push ebx
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        jmp public_6f28826
        public_6f28821 : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f28826 : nop
        push eax
        call public_6f4b540
        fstp dword ptr ss : [esp+0x14]
        push esi
        call public_6f4b440
        add esp, 8
        test eax, eax
        je public_6f28858
        push esi
        call public_6f4b900
        push 0x40080000
        push ebx
        call public_6f4b6f0
        add esp, 0xC
        call public_6f4b250
        jmp public_6f2885d
        public_6f28858 : nop
        mov eax, dword ptr ds : [public_6f61de8]
        public_6f2885d : nop
        push eax
        call public_6f4b540
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax]
        add esp, 4
        pop edi
        fstp dword ptr ds : [eax+8]
        pop esi
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f28750)
    }
}

#undef public_6f28766
#undef public_6f28798
#undef public_6f2879d
#undef public_6f287d8
#undef public_6f287ea
#undef public_6f287ef
#undef public_6f28821
#undef public_6f28826
#undef public_6f28858
#undef public_6f2885d
