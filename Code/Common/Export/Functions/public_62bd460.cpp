#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62bd491 _public_62bd491
#define public_62bd498 _public_62bd498
#define public_62bd49e _public_62bd49e
#define public_62bd4b7 _public_62bd4b7
#define public_62bd4c1 _public_62bd4c1
#define public_62bd4cb _public_62bd4cb

PROC_DECLARE(0x62bd460, internal_62bd460, public_62bd460);
extern "C" NAKED register_t __cdecl internal_62bd460()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], edx
        mov al, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0x10], al
        mov cl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], cl
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        jne public_62bd491
        xor eax, eax
        jmp public_62bd498
        public_62bd491 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 1
        public_62bd498 : nop
        test eax, eax
        jge public_62bd49e
        xor eax, eax
        public_62bd49e : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov esi, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp esi, ecx
        je public_62bd4cb
        public_62bd4b7 : nop
        test eax, eax
        je public_62bd4c1
        mov dx, word ptr ds : [esi]
        mov word ptr ds : [eax], dx
        public_62bd4c1 : nop
        add esi, 2
        add eax, 2
        cmp esi, ecx
        jne public_62bd4b7
        public_62bd4cb : nop
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi], offset public_639ef0c
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bd460)
    }
}

#undef public_62bd491
#undef public_62bd498
#undef public_62bd49e
#undef public_62bd4b7
#undef public_62bd4c1
#undef public_62bd4cb
