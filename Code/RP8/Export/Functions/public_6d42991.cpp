#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42991);

#define public_6d429ad _public_6d429ad
#define public_6d429bd _public_6d429bd

PROC_DECLARE(0x6d42991, internal_6d42991, public_6d42991);
extern "C" NAKED register_t __cdecl internal_6d42991()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        cmp byte ptr ds : [edx+9], 0x10
        jne public_6d429bd
        movzx ecx, byte ptr ds : [edx+0xA]
        imul ecx, dword ptr ds : [edx]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+8]
        jbe public_6d429bd
        push esi
        mov esi, ecx
        public_6d429ad : nop
        mov dl, byte ptr ds : [eax]
        mov cl, byte ptr ds : [eax+1]
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+1], dl
        inc eax
        inc eax
        dec esi
        jne public_6d429ad
        pop esi
        public_6d429bd : nop
        ret 
        UNREACHABLE_TRAP(0x6d42991)
    }
}

#undef public_6d429ad
#undef public_6d429bd
