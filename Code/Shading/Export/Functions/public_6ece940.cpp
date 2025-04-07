#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece940);

#define public_6ece956 _public_6ece956
#define public_6ece961 _public_6ece961
#define public_6ece965 _public_6ece965
#define public_6ece970 _public_6ece970
#define public_6ece97c _public_6ece97c
#define public_6ece985 _public_6ece985

PROC_DECLARE(0x6ece940, internal_6ece940, public_6ece940);
extern "C" NAKED register_t __cdecl internal_6ece940()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_6ece965
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_6ece961
        public_6ece956 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_6ece956
        public_6ece961 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ece965 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ece97c
        nop 
        public_6ece970 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ece970
        public_6ece97c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ece985
        mov dword ptr ds : [ecx], eax
        public_6ece985 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ece940)
    }
}

#undef public_6ece956
#undef public_6ece961
#undef public_6ece965
#undef public_6ece970
#undef public_6ece97c
#undef public_6ece985
