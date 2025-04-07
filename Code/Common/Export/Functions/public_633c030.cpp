#include "Common-PCH.h"


#define public_633c060 _public_633c060
#define public_633c076 _public_633c076
#define public_633c080 _public_633c080
#define public_633c090 _public_633c090
#define public_633c095 _public_633c095
#define public_633c09b _public_633c09b
#define public_633c09d _public_633c09d

PROC_DECLARE(0x633c030, internal_633c030, public_633c030);
extern "C" NAKED register_t __cdecl internal_633c030()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a82c]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ds : [public_658a824], ecx
        je public_633c09d
        mov edx, dword ptr ds : [ecx+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xA9]
        test bl, bl
        lea eax, ds:[ecx+0x10]
        jne public_633c076
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        jne public_633c095
        mov edi, edi
        public_633c060 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        je public_633c060
        mov dword ptr ds : [public_658a824], edx
        pop ebx
        ret 
        public_633c076 : nop
        mov edx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_633c090
        mov edi, edi
        public_633c080 : nop
        mov ecx, edx
        mov dword ptr ds : [public_658a824], ecx
        mov edx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        je public_633c080
        public_633c090 : nop
        cmp dword ptr ds : [ecx+8], edx
        je public_633c09b
        public_633c095 : nop
        mov dword ptr ds : [public_658a824], edx
        public_633c09b : nop
        pop ebx
        ret 
        public_633c09d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x633c030)
    }
}

#undef public_633c060
#undef public_633c076
#undef public_633c080
#undef public_633c090
#undef public_633c095
#undef public_633c09b
#undef public_633c09d
