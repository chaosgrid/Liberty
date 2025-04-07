#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bd70);
CLANG_FORWARD_PROC_SYMBOL(public_620d690);
CLANG_FORWARD_PROC_SYMBOL(public_62397e0);
CLANG_FORWARD_PROC_SYMBOL(public_6239800);
CLANG_FORWARD_PROC_SYMBOL(public_623a360);
CLANG_FORWARD_JUMP_SYMBOL(public_624a210);

#define public_623a399 _public_623a399
#define public_623a3b6 _public_623a3b6
#define public_623a3ca _public_623a3ca
#define public_623a3ed _public_623a3ed
#define public_623a436 _public_623a436
#define public_623a457 _public_623a457
#define public_623a480 _public_623a480
#define public_623a48c _public_623a48c

PROC_DECLARE(0x623a360, internal_623a360, public_623a360);
extern "C" NAKED register_t __cdecl internal_623a360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a210 @0x623a362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a210
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push edi
        mov eax, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_623a48c
        lea eax, ds:[edi+4]
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], eax
        public_623a399 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        je public_623a3ed
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, ebp
        je public_623a3ca
        mov ebx, edi
        sub ebx, eax
        public_623a3b6 : nop
        push esi
        lea ecx, ds:[ebx+esi]
        call public_620d690
        add esi, 4
        cmp esi, ebp
        jne public_623a3b6
        mov ebx, dword ptr ss : [esp+0x3C]
        public_623a3ca : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, ebx
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_620bd70
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0xFFFFFFFC
        mov edx, eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], edx
        jmp public_623a480
        public_623a3ed : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x9C]
        mov ebp, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6239800
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], esi
        lea ecx, ss:[esp+0x14]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x20], eax
        call public_62397e0
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x2C], 1
        cmp eax, esi
        je public_623a457
        public_623a436 : nop
        mov ecx, dword ptr ds : [edi]
        lea ebp, ds:[eax+0x24]
        add eax, 0xC
        push ebp
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA4]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        jne public_623a436
        public_623a457 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xA0]
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 4
        add eax, 4
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        public_623a480 : nop
        cmp edi, dword ptr ss : [esp+0x18]
        jne public_623a399
        pop esi
        pop ebp
        public_623a48c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x623a360)
    }
}

#undef public_623a399
#undef public_623a3b6
#undef public_623a3ca
#undef public_623a3ed
#undef public_623a436
#undef public_623a457
#undef public_623a480
#undef public_623a48c
