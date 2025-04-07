#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b6447 _public_62b6447
#define public_62b644f _public_62b644f
#define public_62b6455 _public_62b6455
#define public_62b6475 _public_62b6475
#define public_62b6483 _public_62b6483
#define public_62b648e _public_62b648e

PROC_DECLARE(0x62b6430, internal_62b6430, public_62b6430);
extern "C" NAKED register_t __cdecl internal_62b6430()
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
        jne public_62b6447
        xor eax, eax
        jmp public_62b644f
        public_62b6447 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_62b644f : nop
        test eax, eax
        jge public_62b6455
        xor eax, eax
        public_62b6455 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_62b648e
        push ebx
        public_62b6475 : nop
        test ecx, ecx
        je public_62b6483
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        public_62b6483 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_62b6475
        pop ebx
        public_62b648e : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b6430)
    }
}

#undef public_62b6447
#undef public_62b644f
#undef public_62b6455
#undef public_62b6475
#undef public_62b6483
#undef public_62b648e
