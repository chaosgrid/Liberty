#include "Common-PCH.h"


#define public_628e747 _public_628e747
#define public_628e761 _public_628e761
#define public_628e765 _public_628e765
#define public_628e769 _public_628e769
#define public_628e771 _public_628e771

PROC_DECLARE(0x628e730, internal_628e730, public_628e730);
extern "C" NAKED register_t __cdecl internal_628e730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp eax, edi
        je public_628e765
        public_628e747 : nop
        cmp edx, ebx
        je public_628e761
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [edx]
        cmp esi, ecx
        ja public_628e769
        jb public_628e771
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_628e747
        jmp public_628e765
        public_628e761 : nop
        cmp eax, edi
        jne public_628e771
        public_628e765 : nop
        cmp edx, ebx
        je public_628e771
        public_628e769 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_628e771 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x628e730)
    }
}

#undef public_628e747
#undef public_628e761
#undef public_628e765
#undef public_628e769
#undef public_628e771
