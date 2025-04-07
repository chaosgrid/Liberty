#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec520);

#define public_62ec541 _public_62ec541
#define public_62ec543 _public_62ec543
#define public_62ec560 _public_62ec560
#define public_62ec56f _public_62ec56f
#define public_62ec577 _public_62ec577
#define public_62ec580 _public_62ec580

PROC_DECLARE(0x62ec520, internal_62ec520, public_62ec520);
extern "C" NAKED register_t __cdecl internal_62ec520()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+8]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je public_62ec577
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62ec577
        mov edx, dword ptr ds : [edx+8]
        test edx, edx
        je public_62ec541
        lea eax, ds:[edx-8]
        jmp public_62ec543
        public_62ec541 : nop
        xor eax, eax
        public_62ec543 : nop
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[ecx+0x1C]
        push 0x20
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x14C]
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jbe public_62ec577
        mov ebp, dword ptr ss : [esp+0x14]
        nop 
        public_62ec560 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_62ec56f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, ebp
        je public_62ec580
        public_62ec56f : nop
        inc esi
        add edi, 4
        cmp esi, ebx
        jb public_62ec560
        public_62ec577 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_62ec580 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62ec520)
    }
}

#undef public_62ec541
#undef public_62ec543
#undef public_62ec560
#undef public_62ec56f
#undef public_62ec577
#undef public_62ec580
