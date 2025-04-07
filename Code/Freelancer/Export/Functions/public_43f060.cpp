#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43f060);
CLANG_FORWARD_PROC_SYMBOL(public_442b10);
CLANG_FORWARD_PROC_SYMBOL(public_442cb0);
CLANG_FORWARD_PROC_SYMBOL(public_594de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9663);

#define public_43f0d8 _public_43f0d8
#define public_43f17f _public_43f17f
#define public_43f1ed _public_43f1ed
#define public_43f246 _public_43f246
#define public_43f286 _public_43f286
#define public_43f291 _public_43f291
#define public_43f2c0 _public_43f2c0

PROC_DECLARE(0x43f060, internal_43f060, public_43f060);
extern "C" NAKED register_t __cdecl internal_43f060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9663 @0x43f062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9663
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov al, byte ptr ss : [esp+0x54]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        push 0
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x34], al
        call dword ptr ds : [public_5c7084]
        mov ebx, dword ptr ss : [esp+0x64]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43f0d8
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c706c]
        public_43f0d8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x30]
        lea esi, ds:[eax+0x388]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x6C], esi
        call public_442cb0
        push 1
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x38C]
        cmp dword ptr ss : [esp+0x10], eax
        jne public_43f1ed
        mov cl, byte ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x30], cl
        push 0
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43f17f
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c706c]
        mov esi, dword ptr ss : [esp+0x64]
        public_43f17f : nop
        push 0x80
        mov dword ptr ss : [esp+0x60], 1
        call public_5b7e84
        mov edi, eax
        add esp, 4
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6fa0]
        mov dword ptr ss : [esp+0x50], 0
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x64], 2
        call public_442b10
        mov ebp, dword ptr ds : [eax]
        push 1
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x60], 1
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [ebp+0x1C], edi
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        public_43f1ed : nop
        mov al, byte ptr ss : [esp+0x64]
        push 0
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43f246
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x28], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_43f246 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], 3
        call public_594de0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_43f286
        lea eax, ds:[ecx+0xC]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        jne public_43f286
        lea eax, ss:[esp+0x1C]
        jmp public_43f291
        public_43f286 : nop
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x64], esi
        lea eax, ss:[esp+0x64]
        public_43f291 : nop
        mov eax, dword ptr ds : [eax]
        push 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        lea ebx, ds:[ebx]
        public_43f2c0 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_43f2c0
        mov ecx, dword ptr ss : [esp+0x44]
        mov al, 1
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x43f060)
    }
}

#undef public_43f0d8
#undef public_43f17f
#undef public_43f1ed
#undef public_43f246
#undef public_43f286
#undef public_43f291
#undef public_43f2c0
