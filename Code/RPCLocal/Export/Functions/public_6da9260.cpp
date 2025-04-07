#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da92af _public_6da92af
#define public_6da92c7 _public_6da92c7
#define public_6da92da _public_6da92da
#define public_6da92f9 _public_6da92f9
#define public_6da930c _public_6da930c
#define public_6da932b _public_6da932b
#define public_6da933e _public_6da933e
#define public_6da937d _public_6da937d
#define public_6da9393 _public_6da9393
#define public_6da93e7 _public_6da93e7
#define public_6da9418 _public_6da9418

PROC_DECLARE(0x6da9260, internal_6da9260, public_6da9260);
extern "C" NAKED register_t __cdecl internal_6da9260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da92af
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da92af : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x16
        jbe public_6da92c7
        mov dword ptr ds : [esi+0xC], ecx
        public_6da92c7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da92da
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da92da : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da92f9
        mov dword ptr ds : [esi+0xC], ecx
        public_6da92f9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da930c
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da930c : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da932b
        mov dword ptr ds : [esi+0xC], ecx
        public_6da932b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da933e
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da933e : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da937d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da937d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da9393
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9393 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x34]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6d8f4f0
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add ebp, 0x10
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da93e7
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da93e7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6da9418
        mov dword ptr ds : [ecx+0x10], esi
        public_6da9418 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6da9260)
    }
}

#undef public_6da92af
#undef public_6da92c7
#undef public_6da92da
#undef public_6da92f9
#undef public_6da930c
#undef public_6da932b
#undef public_6da933e
#undef public_6da937d
#undef public_6da9393
#undef public_6da93e7
#undef public_6da9418
