#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50c70);

#define public_6b50c86 _public_6b50c86
#define public_6b50c91 _public_6b50c91
#define public_6b50c95 _public_6b50c95
#define public_6b50ca0 _public_6b50ca0
#define public_6b50cac _public_6b50cac
#define public_6b50cb5 _public_6b50cb5

PROC_DECLARE(0x6b50c70, internal_6b50c70, public_6b50c70);
extern "C" NAKED register_t __cdecl internal_6b50c70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6b50c95
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6b50c91
        public_6b50c86 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6b50c86
        public_6b50c91 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b50c95 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6b50cac
        nop 
        public_6b50ca0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6b50ca0
        public_6b50cac : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6b50cb5
        mov dword ptr ds : [ecx], eax
        public_6b50cb5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b50c70)
    }
}

#undef public_6b50c86
#undef public_6b50c91
#undef public_6b50c95
#undef public_6b50ca0
#undef public_6b50cac
#undef public_6b50cb5
