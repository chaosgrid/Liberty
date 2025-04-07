#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b210);
CLANG_FORWARD_PROC_SYMBOL(public_629b640);
CLANG_FORWARD_PROC_SYMBOL(public_629bd70);
CLANG_FORWARD_PROC_SYMBOL(public_629cf50);
CLANG_FORWARD_PROC_SYMBOL(public_629cf90);
CLANG_FORWARD_PROC_SYMBOL(public_62f9460);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_JUMP_SYMBOL(public_6393fbb);

#define public_62abc18 _public_62abc18
#define public_62abc30 _public_62abc30
#define public_62abca8 _public_62abca8
#define public_62abcaa _public_62abcaa
#define public_62abccd _public_62abccd
#define public_62abcd5 _public_62abcd5
#define public_62abce8 _public_62abce8
#define public_62abd06 _public_62abd06
#define public_62abd31 _public_62abd31

PROC_DECLARE(0x62abbe0, internal_62abbe0, public_62abbe0);
extern "C" NAKED register_t __cdecl internal_62abbe0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393fbb @0x62abbe2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393fbb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+0x88]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x68]
        mov eax, dword ptr ds : [eax+0x6C]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_62abd31
        public_62abc18 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov ebx, dword ptr ds : [edi+0x10]
        xor esi, esi
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_62abce8
        lea esp, ss:[esp]
        public_62abc30 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        lea ecx, ds:[eax+0xE4]
        call public_629b640
        push eax
        call public_629cf90
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_62abcd5
        mov eax, dword ptr ss : [ebp+0x4C]
        test eax, eax
        jne public_62abcd5
        test esi, esi
        jne public_62abccd
        push edi
        call public_62f9460
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_62abd06
        push 0x88
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0
        je public_62abca8
        mov edx, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+4]
        push 0
        push esi
        push ecx
        push edx
        mov ecx, eax
        call public_629bd70
        mov esi, eax
        jmp public_62abcaa
        public_62abca8 : nop
        xor esi, esi
        public_62abcaa : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        lea ecx, ds:[edx+0xE4]
        call public_629b210
        public_62abccd : nop
        push esi
        mov ecx, ebp
        call public_629cf50
        public_62abcd5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 4
        cmp ebx, eax
        jne public_62abc30
        mov eax, dword ptr ss : [esp+0x18]
        public_62abce8 : nop
        add edi, 0x1C
        cmp edi, eax
        jne public_62abc18
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_62abd06 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, edi
        mov esi, 0x100001
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x579
/*FIXUP push offset public_639e254 @0x62abd21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e254
/*FIXUP push offset public_639e358 @0x62abd26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e358
        push esi
        call dword ptr ds : [eax]
        add esp, 0x18
        public_62abd31 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62abbe0)
    }
}

#undef public_62abc18
#undef public_62abc30
#undef public_62abca8
#undef public_62abcaa
#undef public_62abccd
#undef public_62abcd5
#undef public_62abce8
#undef public_62abd06
#undef public_62abd31
