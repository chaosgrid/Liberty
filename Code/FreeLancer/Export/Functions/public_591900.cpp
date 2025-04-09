#include "Freelancer-PCH.h"


#define public_591910 _public_591910
#define public_591930 _public_591930
#define public_59193d _public_59193d
#define public_591945 _public_591945
#define public_59194f _public_59194f
#define public_591956 _public_591956
#define public_59195a _public_59195a
#define public_59196f _public_59196f
#define public_591971 _public_591971

PROC_DECLARE(0x591900, internal_591900, public_591900);
extern "C" NAKED register_t __cdecl internal_591900()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push ebx
        push esi
        je public_59195a
        mov esi, dword ptr ss : [esp+0xC]
        nop 
        public_591910 : nop
        mov ecx, esi
        dec esi
        test ecx, ecx
        je public_59195a
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_59193d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_591956
        lea esp, ss:[esp]
        public_591930 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_591930
        jmp public_591956
        public_59193d : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_59194f
        public_591945 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_591945
        public_59194f : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_591956
        mov eax, ecx
        public_591956 : nop
        cmp eax, edx
        jne public_591910
        public_59195a : nop
        cmp eax, edx
        pop esi
        pop ebx
        je public_59196f
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_591971
        mov eax, dword ptr ds : [public_5c7078]
        ret 4
        public_59196f : nop
        xor eax, eax
        public_591971 : nop
        ret 4
        UNREACHABLE_TRAP(0x591900)
    }
}

#undef public_591910
#undef public_591930
#undef public_59193d
#undef public_591945
#undef public_59194f
#undef public_591956
#undef public_59195a
#undef public_59196f
#undef public_591971
