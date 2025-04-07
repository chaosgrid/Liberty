#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dae2cf _public_6dae2cf
#define public_6dae2e7 _public_6dae2e7
#define public_6dae311 _public_6dae311
#define public_6dae33b _public_6dae33b
#define public_6dae365 _public_6dae365
#define public_6dae391 _public_6dae391
#define public_6dae3e7 _public_6dae3e7
#define public_6dae41a _public_6dae41a
#define public_6dae426 _public_6dae426

PROC_DECLARE(0x6dae280, internal_6dae280, public_6dae280);
extern "C" NAKED register_t __cdecl internal_6dae280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
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
        je public_6dae2cf
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6dae2cf : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov eax, 0x16
        jbe public_6dae2e7
        mov dword ptr ds : [esi+0xC], eax
        public_6dae2e7 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dae426
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae311
        mov dword ptr ds : [esi+0xC], eax
        public_6dae311 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dae426
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae33b
        mov dword ptr ds : [esi+0xC], eax
        public_6dae33b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dae426
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 2
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae365
        mov dword ptr ds : [esi+0xC], eax
        public_6dae365 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dae426
        mov ecx, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae391
        mov dword ptr ds : [esi+0xC], eax
        public_6dae391 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dae426
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [edi+0x34]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6d8f510
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dae3e7
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6dae3e7 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6dae41a
        mov dword ptr ds : [ecx+0x10], esi
        public_6dae41a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6dae426 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6dae280)
    }
}

#undef public_6dae2cf
#undef public_6dae2e7
#undef public_6dae311
#undef public_6dae33b
#undef public_6dae365
#undef public_6dae391
#undef public_6dae3e7
#undef public_6dae41a
#undef public_6dae426
