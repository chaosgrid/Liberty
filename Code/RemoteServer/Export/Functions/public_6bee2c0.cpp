#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bee2c0);

#define public_6bee2d9 _public_6bee2d9
#define public_6bee2f0 _public_6bee2f0
#define public_6bee2fc _public_6bee2fc
#define public_6bee300 _public_6bee300
#define public_6bee310 _public_6bee310
#define public_6bee31b _public_6bee31b

PROC_DECLARE(0x6bee2c0, internal_6bee2c0, public_6bee2c0);
extern "C" NAKED register_t __cdecl internal_6bee2c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_6bee2d9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6bee2d9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6bee2d9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6bee300
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6bee2fc
        lea esp, ss:[esp]
        public_6bee2f0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6bee2f0
        public_6bee2fc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6bee300 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6bee31b
        lea esp, ss:[esp]
        public_6bee310 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6bee310
        public_6bee31b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bee2c0)
    }
}

#undef public_6bee2d9
#undef public_6bee2f0
#undef public_6bee2fc
#undef public_6bee300
#undef public_6bee310
#undef public_6bee31b
