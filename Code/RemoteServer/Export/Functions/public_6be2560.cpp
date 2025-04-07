#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be2560);

#define public_6be2579 _public_6be2579
#define public_6be2590 _public_6be2590
#define public_6be259c _public_6be259c
#define public_6be25a0 _public_6be25a0
#define public_6be25b0 _public_6be25b0
#define public_6be25bb _public_6be25bb

PROC_DECLARE(0x6be2560, internal_6be2560, public_6be2560);
extern "C" NAKED register_t __cdecl internal_6be2560()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6be2579
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6be2579
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6be2579 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6be25a0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6be259c
        lea esp, ss:[esp]
        public_6be2590 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6be2590
        public_6be259c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6be25a0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6be25bb
        lea esp, ss:[esp]
        public_6be25b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6be25b0
        public_6be25bb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6be2560)
    }
}

#undef public_6be2579
#undef public_6be2590
#undef public_6be259c
#undef public_6be25a0
#undef public_6be25b0
#undef public_6be25bb
