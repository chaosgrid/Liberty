#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6265100);
CLANG_FORWARD_PROC_SYMBOL(public_6265780);
CLANG_FORWARD_PROC_SYMBOL(public_6266920);
CLANG_FORWARD_PROC_SYMBOL(public_6266990);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);
CLANG_FORWARD_PROC_SYMBOL(public_633c230);
CLANG_FORWARD_PROC_SYMBOL(public_633c2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63925c6);

#define public_62657b3 _public_62657b3
#define public_6265800 _public_6265800
#define public_6265802 _public_6265802
#define public_6265848 _public_6265848
#define public_626586f _public_626586f
#define public_626587e _public_626587e
#define public_6265887 _public_6265887
#define public_62658b2 _public_62658b2
#define public_62658dc _public_62658dc
#define public_62658e4 _public_62658e4

PROC_DECLARE(0x6265780, internal_6265780, public_6265780);
extern "C" NAKED register_t __cdecl internal_6265780()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63925c6 @0x6265782*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63925c6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_633c230
        mov edi, eax
        xor ebp, ebp
        cmp edi, ebp
        je public_626587e
        public_62657b3 : nop
        push 0x30
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x40], ebp
        je public_6265800
        lea eax, ss:[esp+0x11]
        push eax
        lea ecx, ss:[esp+0x16]
        push ecx
        lea ecx, ds:[esi+0x10]
        call public_6266920
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ds:[esi+0x24]
        mov byte ptr ss : [esp+0x44], 1
        call public_6266990
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], 0x3EA8F5C3
        jmp public_6265802
        public_6265800 : nop
        xor esi, esi
        public_6265802 : nop
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], esi
        call public_627f280
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        cmp esi, ebp
        je public_6265848
        cmp byte ptr ds : [esi], 0
        je public_6265848
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call public_6265100
        jmp public_626586f
        public_6265848 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov esi, 0x100001
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x11B
/*FIXUP push offset public_6399484 @0x626585f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_63995dc @0x6265864*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63995dc
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_626586f : nop
        call public_633c2a0
        mov edi, eax
        cmp edi, ebp
        jne public_62657b3
        public_626587e : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_62658e4
        public_6265887 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x34], edi
        call public_63222f0
        mov eax, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_62658dc
        add ebx, 0x20
        public_62658b2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        call public_63222f0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x28]
        jne public_62658b2
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62658dc : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ebx+4]
        jne public_6265887
        public_62658e4 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6265780)
    }
}

#undef public_62657b3
#undef public_6265800
#undef public_6265802
#undef public_6265848
#undef public_626586f
#undef public_626587e
#undef public_6265887
#undef public_62658b2
#undef public_62658dc
#undef public_62658e4
