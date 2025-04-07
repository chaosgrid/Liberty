#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62809c0);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);
CLANG_FORWARD_PROC_SYMBOL(public_62fbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62fc380);
CLANG_FORWARD_PROC_SYMBOL(public_62fcf30);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfe0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd3e0);
CLANG_FORWARD_PROC_SYMBOL(public_63195e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62f03d9 _public_62f03d9
#define public_62f03eb _public_62f03eb
#define public_62f0420 _public_62f0420
#define public_62f0449 _public_62f0449
#define public_62f0466 _public_62f0466
#define public_62f0470 _public_62f0470
#define public_62f0490 _public_62f0490
#define public_62f04e0 _public_62f04e0
#define public_62f04fc _public_62f04fc
#define public_62f0523 _public_62f0523
#define public_62f052e _public_62f052e
#define public_62f0544 _public_62f0544
#define public_62f054c _public_62f054c
#define public_62f0554 _public_62f0554

PROC_DECLARE(0x62f03c0, internal_62f03c0, public_62f03c0);
extern "C" NAKED register_t __cdecl internal_62f03c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], edi
        je public_62f03d9
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_62f03d9 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov dword ptr ds : [edi+4], ecx
        je public_62f03eb
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_62f03eb : nop
        lea eax, ss:[ebp+0x48]
        lea esi, ds:[edi+0x48]
        cmp esi, eax
        je public_62f0554
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62f0466
        mov ecx, eax
        cmp eax, ecx
        jne public_62f0466
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62f0449
        lea esp, ss:[esp]
        public_62f0420 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fc380
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_62fd3e0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62f0420
        public_62f0449 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_62f0490
        public_62f0466 : nop
        cmp eax, edi
        je public_62f0490
        lea ebx, ds:[ebx]
        public_62f0470 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6319b80
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_62fbfa0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62f0470
        public_62f0490 : nop
        mov cl, byte ptr ss : [ebp+0x49]
        lea eax, ss:[ebp+0x48]
        mov ebp, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], cl
        mov edx, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [edx+4]
        mov al, byte ptr ds : [ebx+0x41]
        test al, al
        mov ecx, dword ptr ds : [esi+4]
        jne public_62f04fc
        xor eax, eax
        mov al, byte ptr ds : [ebx+0x40]
        push eax
        push ecx
        mov ecx, esi
        call public_63195e0
        mov edi, eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea edx, ds:[edi+0xC]
        push edx
        call public_62809c0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ecx
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebp, eax
        jne public_62f04e0
        mov ebp, edi
        public_62f04e0 : nop
        mov edx, dword ptr ds : [ebx]
        push edi
        push edx
        mov ecx, esi
        call public_62fcf30
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ebx+8]
        push edi
        push eax
        mov ecx, esi
        call public_62fcf30
        mov dword ptr ds : [edi+8], eax
        public_62f04fc : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], ebp
        lea eax, ds:[edx+0x48]
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [esi+8]
        je public_62f0544
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_62f052e
        public_62f0523 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_62f0523
        public_62f052e : nop
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_62fcfe0
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_62f054c
        public_62f0544 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_62f054c : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x20]
        public_62f0554 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [edi+0x1C], ecx
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [edi+0x20], edx
        mov al, byte ptr ss : [ebp+0x39]
        mov byte ptr ds : [edi+0x39], al
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [edi+0x28], edx
        lea eax, ss:[ebp+0x2C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x2C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ss : [ebp+0x38]
        mov byte ptr ds : [edi+0x38], cl
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [edi+0x3C], edx
        mov eax, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [edi+0x40], eax
        mov ecx, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [edi+0x44], ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62f03c0)
    }
}

#undef public_62f03d9
#undef public_62f03eb
#undef public_62f0420
#undef public_62f0449
#undef public_62f0466
#undef public_62f0470
#undef public_62f0490
#undef public_62f04e0
#undef public_62f04fc
#undef public_62f0523
#undef public_62f052e
#undef public_62f0544
#undef public_62f054c
#undef public_62f0554
