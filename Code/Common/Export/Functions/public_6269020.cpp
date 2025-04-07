#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6269051 _public_6269051
#define public_6269070 _public_6269070
#define public_6269082 _public_6269082
#define public_6269090 _public_6269090
#define public_62690a8 _public_62690a8
#define public_62690b5 _public_62690b5
#define public_62690cd _public_62690cd
#define public_62690f3 _public_62690f3
#define public_62690fb _public_62690fb
#define public_6269108 _public_6269108

PROC_DECLARE(0x6269020, internal_6269020, public_6269020);
extern "C" NAKED register_t __cdecl internal_6269020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        sub ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi], cl
        xor ecx, ecx
        sar ebp, 5
        cmp ebp, ecx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        jbe public_6269108
        mov eax, ebp
        jge public_6269051
        xor eax, eax
        public_6269051 : nop
        shl eax, 5
        push ebx
        push eax
        call public_6391d9c
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        test edi, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_6269082
        nop 
        lea esp, ss:[esp]
        public_6269070 : nop
        push edi
        push ebx
        call public_626c1e0
        add esp, 8
        add ebx, 0x20
        add edi, 0x20
        jne public_6269070
        public_6269082 : nop
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ss : [esp+0x18]
        je public_62690a8
        lea esp, ss:[esp]
        public_6269090 : nop
        push edi
        push ebx
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 0x20
        add esp, 8
        add ebx, 0x20
        cmp edi, eax
        jne public_6269090
        public_62690a8 : nop
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_62690cd
        public_62690b5 : nop
        lea edx, ds:[edi+ebx]
        push edi
        push edx
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 0x20
        add esp, 8
        cmp edi, eax
        jne public_62690b5
        public_62690cd : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, ebp
        shl ecx, 5
        add ecx, edx
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        pop ebx
        jne public_62690f3
        xor eax, eax
        jmp public_62690fb
        public_62690f3 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 5
        public_62690fb : nop
        add eax, ebp
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        public_6269108 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6269020)
    }
}

#undef public_6269051
#undef public_6269070
#undef public_6269082
#undef public_6269090
#undef public_62690a8
#undef public_62690b5
#undef public_62690cd
#undef public_62690f3
#undef public_62690fb
#undef public_6269108
