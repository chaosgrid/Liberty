#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f770);

#define public_6b4f789 _public_6b4f789
#define public_6b4f7a0 _public_6b4f7a0
#define public_6b4f7ac _public_6b4f7ac
#define public_6b4f7b0 _public_6b4f7b0
#define public_6b4f7c0 _public_6b4f7c0
#define public_6b4f7cb _public_6b4f7cb

PROC_DECLARE(0x6b4f770, internal_6b4f770, public_6b4f770);
extern "C" NAKED register_t __cdecl internal_6b4f770()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x48]
        test dl, dl
        push ebx
        jne public_6b4f789
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6b4f789
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6b4f789 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6b4f7b0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6b4f7ac
        lea esp, ss:[esp]
        public_6b4f7a0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6b4f7a0
        public_6b4f7ac : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b4f7b0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6b4f7cb
        lea esp, ss:[esp]
        public_6b4f7c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6b4f7c0
        public_6b4f7cb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b4f770)
    }
}

#undef public_6b4f789
#undef public_6b4f7a0
#undef public_6b4f7ac
#undef public_6b4f7b0
#undef public_6b4f7c0
#undef public_6b4f7cb
