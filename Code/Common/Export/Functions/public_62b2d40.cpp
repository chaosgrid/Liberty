#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_6285cb0);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_629ff30);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394641);

#define public_62b2dbc _public_62b2dbc
#define public_62b2e09 _public_62b2e09
#define public_62b2e0b _public_62b2e0b
#define public_62b2e2c _public_62b2e2c
#define public_62b2e30 _public_62b2e30
#define public_62b2ebc _public_62b2ebc
#define public_62b2ede _public_62b2ede

PROC_DECLARE(0x62b2d40, internal_62b2d40, public_62b2d40);
extern "C" NAKED register_t __cdecl internal_62b2d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394641 @0x62b2d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394641
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push 0x68
        mov dword ptr ss : [esp+0xC], ecx
        call public_62fd560
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebp
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_62b2ede
        mov dword ptr ss : [ebp+4], ebx
        push esi
        mov dword ptr ss : [ebp], offset public_639bf6c
        lea ecx, ss:[ebp+8]
        mov byte ptr ss : [esp+0x20], 1
        call public_6285b50
        lea esi, ss:[ebp+0x18]
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 3
        je public_62b2dbc
        add eax, 8
        cmp eax, ebx
        je public_62b2dbc
        push eax
        call public_6341610
        public_62b2dbc : nop
        push edi
        lea edi, ss:[ebp+0x2C]
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov byte ptr ss : [ebp+0x64], bl
        mov dword ptr ss : [ebp], offset public_639e6a0
        mov dword ptr ss : [ebp+8], offset public_639e680
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x24], 4
        je public_62b2e09
        lea ecx, ds:[esi-8]
        jmp public_62b2e0b
        public_62b2e09 : nop
        xor ecx, ecx
        public_62b2e0b : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_62b2e2c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        mov dword ptr ss : [esp+0x2C], eax
        je public_62b2e30
        public_62b2e2c : nop
        mov dword ptr ss : [esp+0x2C], ebx
        public_62b2e30 : nop
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        fmul dword ptr ds : [public_639e678]
        mov esi, dword ptr ss : [esp+0x34]
        lea edx, ss:[ebp+0x50]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, 9
        rep movsd
        fstp dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [ebp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+0x20], ebx
        mov edx, dword ptr ds : [public_63ebc94]
        push ebx
        mov dword ptr ss : [ebp+0x5C], edx
        mov dword ptr ss : [ebp+0x60], 0x41200000
        call public_62ad540
        mov esi, dword ptr ss : [esp+0x2C]
        push 0x20000
        lea ecx, ds:[esi+0xE4]
        mov dword ptr ds : [esi+0x29C], ebx
        call public_629b720
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], eax
        pop edi
        je public_62b2ebc
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        test al, al
        jne public_62b2ebc
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x30]
        public_62b2ebc : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [esi]
        push ebx
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        lea eax, ss:[ebp+8]
        push esi
        push eax
        call public_6285cb0
        add esp, 8
        mov ebx, ebp
        pop esi
        public_62b2ede : nop
        mov edx, dword ptr ss : [esp+8]
        push ebx
        lea ecx, ds:[edx+0x2B0]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_629ff30
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x62b2d40)
    }
}

#undef public_62b2dbc
#undef public_62b2e09
#undef public_62b2e0b
#undef public_62b2e2c
#undef public_62b2e30
#undef public_62b2ebc
#undef public_62b2ede
