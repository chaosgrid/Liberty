#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f14a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f14f0);

#define public_65f1510 _public_65f1510
#define public_65f1527 _public_65f1527
#define public_65f1543 _public_65f1543

PROC_DECLARE(0x65f14f0, internal_65f14f0, public_65f14f0);
extern "C" NAKED register_t __cdecl internal_65f14f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        mov eax, ecx
        imul eax, 0x34
        push edi
        lea edi, ds:[eax+edx+8]
        mov edx, dword ptr ds : [edx+4]
        xor al, al
        cmp ecx, edx
        jge public_65f1543
        mov ebx, dword ptr ss : [esp+0x14]
        public_65f1510 : nop
        cmp dword ptr ds : [edi], ebx
        sete al
        test al, al
        jne public_65f1527
        inc ecx
        add edi, 0x34
        cmp ecx, edx
        jl public_65f1510
        pop edi
        pop esi
        pop ebx
        ret 8
        public_65f1527 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov dword ptr ds : [esi+8], ecx
        push ecx
        mov ecx, esi
        call public_65f14a0
        mov ecx, dword ptr ds : [esi+8]
        test eax, eax
        setne al
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        public_65f1543 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65f14f0)
    }
}

#undef public_65f1510
#undef public_65f1527
#undef public_65f1543
