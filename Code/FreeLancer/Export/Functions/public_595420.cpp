#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_4deb70);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_595420);
CLANG_FORWARD_PROC_SYMBOL(public_595730);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4ae6);

#define public_595636 _public_595636
#define public_595679 _public_595679
#define public_5956c6 _public_5956c6

PROC_DECLARE(0x595420, internal_595420, public_595420);
extern "C" NAKED register_t __cdecl internal_595420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4ae6 @0x595422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4ae6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        call public_59f860
        xor ebx, ebx
        mov byte ptr ds : [esi+0x331], bl
        mov byte ptr ds : [esi+0x330], bl
        mov byte ptr ds : [esi+0x32F], bl
        mov byte ptr ds : [esi+0x32E], bl
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [esi+0x348], ebx
        mov dword ptr ds : [esi+0x340], ebx
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x33C], ebx
        mov byte ptr ds : [esi+0x34C], bl
        mov dword ptr ds : [esi+0x35C], ebx
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov byte ptr ds : [esi+0x360], bl
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x368], ebx
        mov dword ptr ds : [esi+0x36C], ebx
        mov dword ptr ds : [esi+0x364], ebx
        mov byte ptr ds : [esi+0x374], bl
        lea ebp, ds:[esi+0x33C]
        mov dword ptr ds : [esi+0x384], ebx
        mov dword ptr ds : [esi+0x37C], ebx
        mov dword ptr ds : [esi+0x380], ebx
        mov dword ptr ds : [esi+0x378], ebx
        mov byte ptr ds : [esi+0x388], bl
        lea edi, ds:[esi+0x3A0]
        mov dword ptr ds : [esi+0x398], ebx
        mov dword ptr ds : [esi+0x390], ebx
        mov dword ptr ds : [esi+0x394], ebx
        mov dword ptr ds : [esi+0x38C], ebx
        mov byte ptr ds : [esi+0x39C], bl
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [edi], al
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        lea ecx, ds:[esi+0x3DC]
        mov byte ptr ss : [esp+0x24], 1
        call public_4215b0
        mov dword ptr ds : [esi+0x408], ebx
        mov dword ptr ds : [esi+0x404], ebx
        mov dword ptr ds : [esi+0x400], ebx
        mov dword ptr ds : [esi], offset public_5e55ac
        mov dword ptr ds : [esi+0x7C], offset public_5e559c
        mov byte ptr ds : [esi+0x32C], 1
        mov byte ptr ds : [esi+0x32D], bl
        mov ecx, dword ptr ds : [public_679b94]
        mov dword ptr ds : [esi+0x3CC], ebx
        mov dword ptr ds : [esi+0x32E], ecx
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x334], ebx
        mov dword ptr ds : [esi+0x3D0], ebx
        mov dword ptr ds : [esi+0x3C8], ebx
        mov dword ptr ds : [esi+0x3C4], ebx
        mov dword ptr ds : [esi+0x3C0], ebx
        mov dword ptr ds : [esi+0x3B0], ebx
        mov byte ptr ds : [esi+0x3B4], bl
        mov byte ptr ds : [esi+0x3D4], bl
        mov dword ptr ds : [esi+0x3D8], ebx
        mov dword ptr ds : [esi+0x424], ebx
        mov dword ptr ds : [esi+0x420], ebx
        mov dword ptr ds : [esi+0x41C], ebx
        mov edx, dword ptr ds : [esi+0x3CC]
        mov dword ptr ds : [esi+0x428], edx
        mov byte ptr ds : [esi+0x42C], bl
        mov dword ptr ds : [esi+0x3B8], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x3BC], ebx
        cmp byte ptr ds : [public_67d9e0], bl
        jne public_595636
        mov eax, dword ptr ds : [public_5c6dd8]
        mov byte ptr ds : [public_67d9e0], 1
        mov ecx, dword ptr ds : [eax]
        push ecx
/*FIXUP push offset public_5e557c @0x5955eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e557c
        mov ecx, offset public_67d9c8
        call public_425b30
/*FIXUP push offset public_5e556c @0x5955fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e556c
        mov ecx, offset public_67d9c8
        call public_595730
/*FIXUP push offset public_5e5554 @0x595609*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5554
        mov ecx, offset public_67d9c8
        mov dword ptr ds : [public_67d9e4], eax
        call public_595730
/*FIXUP push offset public_5e5540 @0x59561d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5540
        mov ecx, offset public_67d9c8
        mov dword ptr ds : [public_67d9e8], eax
        call public_595730
        mov dword ptr ds : [public_67d9ec], eax
        public_595636 : nop
        mov edx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [esi+0x40C], edx
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [esi+0x410], eax
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [esi+0x414], ecx
        mov edx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [esi+0x418], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_595679
        mov eax, dword ptr ds : [edi+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 5
        jae public_5956c6
        public_595679 : nop
        push 0x14
        call public_5b7e84
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push eax
        push ecx
        mov ecx, edi
        call public_597c70
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        push edx
        push eax
        mov ecx, edi
        call public_53aaa0
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        lea edx, ds:[ebx+0x14]
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0xC], edx
        call public_5ad970
        lea eax, ds:[ebx+eax*4]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], ebx
        public_5956c6 : nop
        mov edx, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_4deb70
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[esi+0x350]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call public_537260
        lea edx, ss:[esp+0x14]
        lea eax, ds:[esi+0x38C]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        mov ecx, edi
        call public_537260
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x595420)
    }
}

#undef public_595636
#undef public_595679
#undef public_5956c6
