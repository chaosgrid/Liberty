#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_46bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_4b68b0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_46bbe0 _public_46bbe0
#define public_46bbf0 _public_46bbf0
#define public_46bbf3 _public_46bbf3
#define public_46bbf7 _public_46bbf7
#define public_46bc1f _public_46bc1f
#define public_46bc72 _public_46bc72
#define public_46bc7f _public_46bc7f
#define public_46bca7 _public_46bca7
#define public_46bcb5 _public_46bcb5

PROC_DECLARE(0x46bbb0, internal_46bbb0, public_46bbb0);
extern "C" NAKED register_t __cdecl internal_46bbb0()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], 0
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ecx
        mov al, 1
        je public_46bbf7
        lea esp, ss:[esp]
        public_46bbe0 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_46bbf0
        mov esi, dword ptr ds : [esi]
        jmp public_46bbf3
        public_46bbf0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_46bbf3 : nop
        cmp esi, ecx
        jne public_46bbe0
        public_46bbf7 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_46bc1f
        lea ecx, ss:[esp+0x24]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_4b68b0
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        add eax, 0x10
        pop ebp
        add esp, 0x28
        ret 4
        public_46bc1f : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_46bc7f
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_46bc72
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x4C], 1
        call public_4b68b0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_46d660
        mov edx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        lea eax, ds:[edx+0x10]
        pop ebp
        add esp, 0x28
        ret 4
        public_46bc72 : nop
        lea ecx, ss:[esp+0x10]
        call public_43c010
        mov edx, dword ptr ss : [esp+0x24]
        public_46bc7f : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0xC], edx
        jae public_46bca7
        lea ecx, ss:[esp+0xE]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x22], 1
        call public_4b68b0
        jmp public_46bcb5
        public_46bca7 : nop
        lea edx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], 0
        push edx
        lea eax, ss:[esp+0x14]
        public_46bcb5 : nop
        lea ecx, ss:[esp+0x30]
        push eax
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        lea eax, ds:[ecx+0x10]
        pop ebp
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x46bbb0)
    }
}

#undef public_46bbe0
#undef public_46bbf0
#undef public_46bbf3
#undef public_46bbf7
#undef public_46bc1f
#undef public_46bc72
#undef public_46bc7f
#undef public_46bca7
#undef public_46bcb5
