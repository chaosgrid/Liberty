#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f1d);

#define public_6d45f3f _public_6d45f3f
#define public_6d45f62 _public_6d45f62

PROC_DECLARE(0x6d45f1d, internal_6d45f1d, public_6d45f1d);
extern "C" NAKED register_t __cdecl internal_6d45f1d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[ecx+eax*4]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[edx+ecx*4]
        mov ecx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        jle public_6d45f62
        push ebx
        push esi
        mov dword ptr ss : [ebp+0xC], ecx
        push edi
        public_6d45f3f : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edx]
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        add eax, 4
        add edx, 4
        dec dword ptr ss : [ebp+0xC]
        rep movsb
        jne public_6d45f3f
        pop edi
        pop esi
        pop ebx
        public_6d45f62 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d45f1d)
    }
}

#undef public_6d45f3f
#undef public_6d45f62
