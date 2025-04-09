#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43b630);
CLANG_FORWARD_PROC_SYMBOL(public_442720);
CLANG_FORWARD_PROC_SYMBOL(public_45a270);
CLANG_FORWARD_PROC_SYMBOL(public_45da00);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4b62d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c80f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba243);

#define public_45a36e _public_45a36e
#define public_45a3c0 _public_45a3c0
#define public_45a3d3 _public_45a3d3
#define public_45a405 _public_45a405
#define public_45a424 _public_45a424
#define public_45a441 _public_45a441

PROC_DECLARE(0x45a270, internal_45a270, public_45a270);
extern "C" NAKED register_t __cdecl internal_45a270()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba243 @0x45a278*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba243
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        push esi
        call public_41dd90
        test al, al
        je public_45a441
        mov al, byte ptr ds : [public_67dcc8]
        xor ebx, ebx
        cmp al, bl
        jne public_45a441
        call public_4c4810
        test al, al
        je public_45a424
        cmp dword ptr ds : [public_66d3f0], ebx
        je public_45a441
        call public_442720
        test al, al
        jne public_45a441
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45da00
        test al, al
        jne public_45a441
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x74], ebx
        call public_4144b0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x74], 1
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        call public_414280
        mov byte ptr ss : [esp+0x68], bl
        mov eax, 0x45E
        mov ecx, offset public_668708
        mov dword ptr ss : [esp+0x74], 2
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        call public_43a460
        mov ecx, offset public_668708
        mov esi, eax
        call public_43b630
        cmp esi, ebx
        je public_45a36e
        cmp eax, ebx
        je public_45a36e
        mov eax, dword ptr ds : [eax]
/*FIXUP push offset public_5cb7ec @0x45a34b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7ec
        push eax
        call dword ptr ds : [public_5c616c]
        mov ecx, dword ptr ds : [esi+0x38]
        add esp, 8
        cmp ecx, eax
        jne public_45a36e
        mov eax, 0x3A0
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        public_45a36e : nop
        push edi
        lea eax, ss:[esp+0xC]
        push 0x41000000
        push eax
        call public_4b62d0
        mov ecx, dword ptr ds : [public_66d344]
        push ebx
        push ecx
        call public_489e80
        add esp, 0x10
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x78], 3
        mov dword ptr ss : [esp+0x88], edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x78], 5
        call public_4144f0
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, edi
        mov byte ptr ss : [esp+0x78], 4
        je public_45a3d3
        public_45a3c0 : nop
        push ebx
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, edi
        jne public_45a3c0
        mov esi, dword ptr ss : [esp+0x2C]
        public_45a3d3 : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [public_5c71d8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        pop edi
        je public_45a405
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        public_45a405 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_45a441
        push eax
        call esi
        add esp, 4
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 
        public_45a424 : nop
        mov eax, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [esp+0x7C]
        push eax
        push ecx
        push edx
        call public_4c80f0
        add esp, 0xC
        public_45a441 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 
        UNREACHABLE_TRAP(0x45a270)
    }
}

#undef public_45a36e
#undef public_45a3c0
#undef public_45a3d3
#undef public_45a405
#undef public_45a424
#undef public_45a441
