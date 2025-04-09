#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_532210);
CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0769);

#define public_5322aa _public_5322aa
#define public_5322ac _public_5322ac
#define public_5322da _public_5322da
#define public_532332 _public_532332
#define public_532334 _public_532334
#define public_53237a _public_53237a

PROC_DECLARE(0x532210, internal_532210, public_532210);
extern "C" NAKED register_t __cdecl internal_532210()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0769 @0x532212*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0769
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        mov eax, dword ptr ss : [esp+0x94]
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x98]
        push edi
        xor edi, edi
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx], offset public_5de13c
        call dword ptr ds : [public_5c6934]
        push esi
        call dword ptr ds : [public_5c6570]
        mov esi, eax
        add esp, 4
        cmp esi, edi
        je public_5322ac
        mov edi, dword ptr ds : [public_5c6930]
        mov ecx, esi
        call edi
        mov ecx, eax
        add ecx, 0x70
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5322aa
        mov ecx, esi
        call edi
        add eax, 0x70
        push eax
        call dword ptr ds : [public_5c63c8]
        xor edi, edi
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [ebx+0xC], eax
        je public_5322ac
        push eax
        call public_536100
        add esp, 4
        jmp public_5322ac
        public_5322aa : nop
        xor edi, edi
        public_5322ac : nop
        mov dword ptr ss : [esp+0x94], edi
        mov dword ptr ds : [ebx+0x10], edi
        mov dword ptr ds : [ebx+0x14], edi
        mov dword ptr ds : [ebx+0x18], edi
        mov dword ptr ds : [ebx+0x1C], edi
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edi
        mov byte ptr ss : [esp+0x94], 1
        mov dword ptr ds : [ebx], offset public_5de16c
        je public_5322da
        mov ecx, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [ecx+4]
        public_5322da : nop
        lea ecx, ds:[edi+0x54]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_53237a
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x68]
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, 9
        lea esi, ss:[esp+0x58]
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        je public_532332
        mov ecx, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_532334
        public_532332 : nop
        xor esi, esi
        public_532334 : nop
        mov edx, dword ptr ss : [ebp]
        push 0
        mov ecx, ebp
        call dword ptr ds : [edx+0x64]
        mov edi, eax
        mov eax, dword ptr ds : [ebx+8]
        add esi, 0x54
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_5c6040]
        test al, al
        pop ebp
        jne public_53237a
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ds:[ebx+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push edx
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_53237a : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 8
        UNREACHABLE_TRAP(0x532210)
    }
}

#undef public_5322aa
#undef public_5322ac
#undef public_5322da
#undef public_532332
#undef public_532334
#undef public_53237a
