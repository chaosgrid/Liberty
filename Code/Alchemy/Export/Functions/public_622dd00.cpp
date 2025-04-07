#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bd70);
CLANG_FORWARD_PROC_SYMBOL(public_620d690);
CLANG_FORWARD_PROC_SYMBOL(public_622d220);
CLANG_FORWARD_PROC_SYMBOL(public_622d240);
CLANG_FORWARD_PROC_SYMBOL(public_622dd00);
CLANG_FORWARD_JUMP_SYMBOL(public_6249690);

#define public_622dd39 _public_622dd39
#define public_622dd56 _public_622dd56
#define public_622dd6a _public_622dd6a
#define public_622dd8d _public_622dd8d
#define public_622ddd6 _public_622ddd6
#define public_622ddf7 _public_622ddf7
#define public_622de20 _public_622de20
#define public_622de2c _public_622de2c

PROC_DECLARE(0x622dd00, internal_622dd00, public_622dd00);
extern "C" NAKED register_t __cdecl internal_622dd00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249690 @0x622dd02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249690
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
        je public_622de2c
        lea eax, ds:[edi+4]
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], eax
        public_622dd39 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        je public_622dd8d
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, ebp
        je public_622dd6a
        mov ebx, edi
        sub ebx, eax
        public_622dd56 : nop
        push esi
        lea ecx, ds:[ebx+esi]
        call public_620d690
        add esi, 4
        cmp esi, ebp
        jne public_622dd56
        mov ebx, dword ptr ss : [esp+0x3C]
        public_622dd6a : nop
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
        jmp public_622de20
        public_622dd8d : nop
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
        call public_622d240
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], esi
        lea ecx, ss:[esp+0x14]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x20], eax
        call public_622d220
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x2C], 1
        cmp eax, esi
        je public_622ddf7
        public_622ddd6 : nop
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
        jne public_622ddd6
        public_622ddf7 : nop
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
        public_622de20 : nop
        cmp edi, dword ptr ss : [esp+0x18]
        jne public_622dd39
        pop esi
        pop ebp
        public_622de2c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x622dd00)
    }
}

#undef public_622dd39
#undef public_622dd56
#undef public_622dd6a
#undef public_622dd8d
#undef public_622ddd6
#undef public_622ddf7
#undef public_622de20
#undef public_622de2c
