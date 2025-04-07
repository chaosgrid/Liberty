#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76470);

#define public_6b74ed3 _public_6b74ed3
#define public_6b74f02 _public_6b74f02
#define public_6b74f0e _public_6b74f0e
#define public_6b74f1e _public_6b74f1e
#define public_6b74f28 _public_6b74f28
#define public_6b74f54 _public_6b74f54
#define public_6b74f6b _public_6b74f6b
#define public_6b74f6f _public_6b74f6f
#define public_6b74f79 _public_6b74f79
#define public_6b74fc9 _public_6b74fc9
#define public_6b74fd5 _public_6b74fd5

PROC_DECLARE(0x6b74eb0, internal_6b74eb0, public_6b74eb0);
extern "C" NAKED register_t __cdecl internal_6b74eb0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b74f0e
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        jne public_6b74ed3
        mov ecx, dword ptr ds : [edi+0x130]
        public_6b74ed3 : nop
        mov esi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6b74f02
        mov eax, dword ptr ds : [edi+0x120]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [edi+0x11C], eax
        public_6b74f02 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
        public_6b74f0e : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6b74f1e
        mov ebp, dword ptr ds : [eax]
        jmp public_6b74f28
        public_6b74f1e : nop
        xor edx, edx
        test ebx, ebx
        setge dl
        dec edx
        mov ebp, edx
        public_6b74f28 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x20]
        dec eax
        je public_6b74f54
        dec eax
        jne public_6b74f6f
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        push edi
        call dword ptr ds : [eax+0x28]
        sub eax, ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, eax
        sbb ecx, ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov ebp, ecx
        jmp public_6b74f6b
        public_6b74f54 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        push edi
        call dword ptr ds : [edx+0x80]
        add ebx, eax
        mov ecx, dword ptr ss : [esp+0x14]
        adc ebp, ecx
        public_6b74f6b : nop
        mov dword ptr ss : [esp+0x10], eax
        public_6b74f6f : nop
        test esi, esi
        jne public_6b74f79
        mov esi, dword ptr ds : [edi+0x130]
        public_6b74f79 : nop
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], esi
        lea ecx, ds:[edi+0x134]
        je public_6b74fd5
        lea edx, ss:[esp+0x24]
        lea eax, ss:[esp+0x2C]
        push edx
        push eax
        call public_6b76470
        mov ecx, dword ptr ds : [edi+0x138]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ecx
        je public_6b74fd5
        add eax, 0x10
        test eax, eax
        je public_6b74fd5
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6b74fd5
        test ecx, ecx
        je public_6b74fd5
        cmp ebx, 0xFFFFFFFF
        mov dword ptr ds : [eax+0x10], ebx
        je public_6b74fd5
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_6b74fc9
        mov dword ptr ds : [eax], ebp
        public_6b74fc9 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
        public_6b74fd5 : nop
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [edi+0x11C], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6b74eb0)
    }
}

#undef public_6b74ed3
#undef public_6b74f02
#undef public_6b74f0e
#undef public_6b74f1e
#undef public_6b74f28
#undef public_6b74f54
#undef public_6b74f6b
#undef public_6b74f6f
#undef public_6b74f79
#undef public_6b74fc9
#undef public_6b74fd5
