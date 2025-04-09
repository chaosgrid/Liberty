#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4206c0);

#define public_4206e0 _public_4206e0
#define public_4206f7 _public_4206f7
#define public_4206fb _public_4206fb
#define public_420701 _public_420701
#define public_420736 _public_420736

PROC_DECLARE(0x4206c0, internal_4206c0, public_4206c0);
extern "C" NAKED register_t __cdecl internal_4206c0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_420701
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        lea ebp, ds:[eax+4]
        nop 
        lea esp, ss:[esp]
        public_4206e0 : nop
        lea ecx, ds:[esi+0x10]
        push ebp
        push ecx
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jge public_4206f7
        mov esi, dword ptr ds : [esi+8]
        jmp public_4206fb
        public_4206f7 : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_4206fb : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_4206e0
        pop ebp
        public_420701 : nop
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], ebx
        je public_420736
        mov edx, dword ptr ss : [esp+0x18]
        add ebx, 0x10
        add edx, 4
        push ebx
        push edx
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jl public_420736
        lea eax, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_420736 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4206c0)
    }
}

#undef public_4206e0
#undef public_4206f7
#undef public_4206fb
#undef public_420701
#undef public_420736
