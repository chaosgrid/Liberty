#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2820);
CLANG_FORWARD_PROC_SYMBOL(public_6da2b50);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db29b1);

#define public_6da2862 _public_6da2862
#define public_6da28b6 _public_6da28b6
#define public_6da2924 _public_6da2924
#define public_6da292d _public_6da292d
#define public_6da2968 _public_6da2968

PROC_DECLARE(0x6da2820, internal_6da2820, public_6da2820);
extern "C" NAKED register_t __cdecl internal_6da2820()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6db29b1 @0x6da2828*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db29b1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6dbb770]
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ds : [public_6dbbf78], ebx
        je public_6da2968
        push ebp
        push esi
        mov eax, offset public_6dbb770
        push edi
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x18], eax
        public_6da2862 : nop
        mov esi, dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x13]
        or ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x24], al
        xor eax, eax
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6db3160]
        test al, al
        je public_6da28b6
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], ebp
        mov byte ptr ds : [eax+ebp], bl
        public_6da28b6 : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x54], ebx
        call dword ptr ds : [public_6db3170]
        mov dword ptr ss : [esp+0x44], ebx
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_6dbbf64
        mov byte ptr ss : [esp+0x58], 1
        call public_6da2b50
        mov esi, dword ptr ss : [esp+0x1C]
        push 1
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x54], bl
        call dword ptr ds : [public_6db31b0]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x1C], ecx
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        je public_6da292d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6da2924
        cmp cl, 0xFF
        je public_6da2924
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6da292d
        public_6da2924 : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6da292d : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_6dbbf78]
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        inc edi
        inc edx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [public_6dbbf78], edx
        jne public_6da2862
        pop edi
        pop esi
        pop ebp
        public_6da2968 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6da2820)
    }
}

#undef public_6da2862
#undef public_6da28b6
#undef public_6da2924
#undef public_6da292d
#undef public_6da2968
