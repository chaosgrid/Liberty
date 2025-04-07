#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9b30);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f9b47 _public_65f9b47
#define public_65f9b4f _public_65f9b4f
#define public_65f9b55 _public_65f9b55
#define public_65f9b74 _public_65f9b74
#define public_65f9b7c _public_65f9b7c
#define public_65f9b86 _public_65f9b86

PROC_DECLARE(0x65f9b30, internal_65f9b30, public_65f9b30);
extern "C" NAKED register_t __cdecl internal_65f9b30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_65f9b47
        xor eax, eax
        jmp public_65f9b4f
        public_65f9b47 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_65f9b4f : nop
        test eax, eax
        jge public_65f9b55
        xor eax, eax
        public_65f9b55 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6600bb6
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_65f9b86
        public_65f9b74 : nop
        test ecx, ecx
        je public_65f9b7c
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_65f9b7c : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_65f9b74
        public_65f9b86 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f9b30)
    }
}

#undef public_65f9b47
#undef public_65f9b4f
#undef public_65f9b55
#undef public_65f9b74
#undef public_65f9b7c
#undef public_65f9b86
