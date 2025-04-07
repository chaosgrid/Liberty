#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef92f0);

#define public_6ef931f _public_6ef931f
#define public_6ef9321 _public_6ef9321

PROC_DECLARE(0x6ef92f0, internal_6ef92f0, public_6ef92f0);
extern "C" NAKED register_t __cdecl internal_6ef92f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr ss : [ebp+0x10]
        jecxz public_6ef9321
        mov ebx, ecx
        mov edi, dword ptr ss : [ebp+8]
        mov esi, edi
        xor eax, eax
        repne scasb
        neg ecx
        add ecx, ebx
        mov edi, esi
        mov esi, dword ptr ss : [ebp+0xC]
        repe cmpsb
        mov al, byte ptr ds : [esi-1]
        xor ecx, ecx
        cmp al, byte ptr ds : [edi-1]
        ja public_6ef931f
        je public_6ef9321
        dec ecx
        dec ecx
        public_6ef931f : nop
        not ecx
        public_6ef9321 : nop
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef92f0)
    }
}

#undef public_6ef931f
#undef public_6ef9321
