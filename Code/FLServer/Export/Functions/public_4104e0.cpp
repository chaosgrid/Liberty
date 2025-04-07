#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_41910a);
CLANG_FORWARD_PROC_SYMBOL(public_419152);
CLANG_FORWARD_PROC_SYMBOL(public_419194);
CLANG_FORWARD_PROC_SYMBOL(public_41919a);
CLANG_FORWARD_PROC_SYMBOL(public_4191a0);
CLANG_FORWARD_JUMP_SYMBOL(public_41a5e1);

#define public_41056c _public_41056c
#define public_4105a5 _public_4105a5
#define public_41062b _public_41062b
#define public_410634 _public_410634
#define public_410641 _public_410641
#define public_410648 _public_410648
#define public_410693 _public_410693
#define public_41069b _public_41069b
#define public_4106f9 _public_4106f9

PROC_DECLARE(0x4104e0, internal_4104e0, public_4104e0);
extern "C" NAKED register_t __cdecl internal_4104e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a5e1 @0x4104e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a5e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x828
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x844]
        mov eax, dword ptr ds : [edi+0x18]
        mov ebx, ecx
        push eax
        mov dword ptr ss : [esp+0x14], ebx
        call public_4191a0
        lea ecx, ds:[edi+0x1C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov esi, eax
        call dword ptr ds : [public_41bbcc]
        mov eax, dword ptr ds : [edi+0x10]
        and eax, 1
        mov dword ptr ss : [esp+0x20], eax
        je public_41056c
        push 0xD
        call dword ptr ds : [public_41bbd4]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_41919a
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+4]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        call dword ptr ds : [public_41bbd0]
        mov dword ptr ss : [esp+0x18], offset public_41daa4
        mov dword ptr ss : [esp+0x83C], 0
        jmp public_4105a5
        public_41056c : nop
        push 5
        call dword ptr ds : [public_41bbd4]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_41919a
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+4]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        call dword ptr ds : [public_41bbd0]
        mov dword ptr ss : [esp+0x18], offset public_41daa4
        mov dword ptr ss : [esp+0x83C], 1
        public_4105a5 : nop
        lea ecx, ss:[esp+0x18]
        call public_41910a
        mov ecx, dword ptr ds : [edi+8]
        or eax, 0xFFFFFFFF
        cmp ecx, eax
        mov dword ptr ss : [esp+0x83C], eax
        je public_4106f9
        push ebp
        lea ecx, ss:[esp+0x18]
        call public_418aaa
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x848], 2
        call public_419194
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [public_41b040]
        mov ebp, dword ptr ds : [edi+0x2C]
        mov edx, dword ptr ds : [ebx-4]
        add esp, 8
        lea edi, ds:[ebx-4]
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x24]
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ds : [edi]
        push ebp
        mov ecx, edi
        call dword ptr ds : [eax+0x1C]
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        je public_410634
        test al, al
        je public_41062b
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[ecx+0x58]
        jmp public_410648
        public_41062b : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+0x50]
        jmp public_410648
        public_410634 : nop
        test al, al
        je public_410641
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0x48
        jmp public_410648
        public_410641 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[ecx+0x40]
        public_410648 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        push 1
        mov ecx, esi
        mov ebx, eax
        call public_419152
        mov eax, dword ptr ds : [edi]
        push ebp
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        add dword ptr ss : [esp+0x28], 4
        mov ebp, dword ptr ds : [public_41bbd4]
        push 8
        mov edi, eax
        call ebp
        cmp edi, eax
        jne public_410693
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [esi]
        neg ecx
        sbb ecx, ecx
        and ecx, 6
        add ecx, 8
        push ecx
        call ebp
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0x38]
        jmp public_41069b
        public_410693 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        public_41069b : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [esi]
        lea ecx, ds:[eax*8]
        or ecx, 5
        push ecx
        call ebp
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0x34]
        lea edx, ss:[esp+0x38]
        push edx
        call dword ptr ds : [public_41b8f4]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push edx
        push eax
        call dword ptr ds : [public_41b0f8]
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x840], 0xFFFFFFFF
        call public_418aa4
        pop ebp
        public_4106f9 : nop
        mov ecx, dword ptr ss : [esp+0x834]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x834
        ret 4
        UNREACHABLE_TRAP(0x4104e0)
    }
}

#undef public_41056c
#undef public_4105a5
#undef public_41062b
#undef public_410634
#undef public_410641
#undef public_410648
#undef public_410693
#undef public_41069b
#undef public_4106f9
