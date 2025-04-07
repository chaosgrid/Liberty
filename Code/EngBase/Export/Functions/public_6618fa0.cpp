#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_6618fa0);

#define public_6618fbc _public_6618fbc
#define public_6618fce _public_6618fce
#define public_6618fd2 _public_6618fd2
#define public_6618fde _public_6618fde
#define public_6618ffb _public_6618ffb
#define public_6618ffe _public_6618ffe
#define public_6619002 _public_6619002
#define public_6619016 _public_6619016
#define public_6619025 _public_6619025
#define public_6619037 _public_6619037

PROC_DECLARE(0x6618fa0, internal_6618fa0, public_6618fa0);
extern "C" NAKED register_t __cdecl internal_6618fa0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, dword ptr ss : [ebp+4]
        mov edi, ebp
        cmp esi, ebx
        je public_6618fde
        public_6618fbc : nop
        push edx
        lea ecx, ds:[esi+0xC]
        call public_6612b20
        test al, al
        je public_6618fce
        mov esi, dword ptr ds : [esi+8]
        jmp public_6618fd2
        public_6618fce : nop
        mov edi, esi
        mov esi, dword ptr ds : [esi]
        public_6618fd2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        cmp esi, ebx
        jne public_6618fbc
        mov ebp, dword ptr ss : [esp+0x10]
        public_6618fde : nop
        cmp edi, ebp
        mov dword ptr ss : [esp+0x1C], edi
        je public_6619037
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edi+0xC]
        cmp eax, ecx
        jne public_6618ffb
        test eax, eax
        jne public_6619016
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [edi+0x18]
        cmp eax, ecx
        public_6618ffb : nop
        setl al
        public_6618ffe : nop
        test al, al
        jne public_6619037
        public_6619002 : nop
        lea eax, ss:[esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        public_6619016 : nop
        cmp eax, 1
        jne public_6619025
        mov ecx, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [edi+0x18]
        cmp ecx, eax
        jmp public_6618ffb
        public_6619025 : nop
        cmp eax, 2
        jne public_6619002
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edi+0x10]
        cmp edx, eax
        setb al
        jmp public_6618ffe
        public_6619037 : nop
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebp
        pop edi
        pop esi
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6618fa0)
    }
}

#undef public_6618fbc
#undef public_6618fce
#undef public_6618fd2
#undef public_6618fde
#undef public_6618ffb
#undef public_6618ffe
#undef public_6619002
#undef public_6619016
#undef public_6619025
#undef public_6619037
