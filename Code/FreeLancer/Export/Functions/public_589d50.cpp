#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);
CLANG_FORWARD_PROC_SYMBOL(public_589d50);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c45b9);

#define public_589daf _public_589daf
#define public_589de5 _public_589de5
#define public_589e20 _public_589e20
#define public_589e30 _public_589e30
#define public_589e61 _public_589e61
#define public_589e6c _public_589e6c
#define public_589e87 _public_589e87
#define public_589ea7 _public_589ea7

PROC_DECLARE(0x589d50, internal_589d50, public_589d50);
extern "C" NAKED register_t __cdecl internal_589d50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c45b9 @0x589d52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c45b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_5e4f24
        mov dword ptr ds : [edi+0x7C], offset public_5e4f18
        mov al, byte ptr ds : [edi+0x389]
        test al, al
        mov dword ptr ss : [esp+0x18], 1
        je public_589de5
        mov byte ptr ds : [edi+0x389], 0
        mov eax, dword ptr ds : [public_67d8c8]
        dec eax
        test eax, eax
        mov dword ptr ds : [public_67d8c8], eax
        jg public_589daf
        push 0xB
        call public_5646e0
        add esp, 4
        public_589daf : nop
        fld dword ptr ds : [edi+0x68]
        mov ecx, dword ptr ds : [edi+0x32C]
        fadd dword ptr ds : [edi+0xB0]
        mov esi, dword ptr ds : [edi+0x370]
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ds : [edi+0x334]
        call public_4145d0
        mov ecx, dword ptr ds : [edi+0x334]
        push esi
        call public_415860
        public_589de5 : nop
        mov ecx, dword ptr ds : [edi+0x334]
        call public_4144f0
        mov esi, dword ptr ds : [edi+0x334]
        test esi, esi
        mov dword ptr ss : [esp+8], esi
        je public_589e6c
        push ebx
        push ebp
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 3
        call public_4144f0
        mov ebx, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [esi+0x10]
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x20], 2
        je public_589e30
        nop 
        lea esp, ss:[esp]
        public_589e20 : nop
        push 0
        mov ecx, ebp
        call public_418f70
        add ebp, 8
        cmp ebp, ebx
        jne public_589e20
        public_589e30 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_5b7e1d
        xor ebx, ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 1
        je public_589e61
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        public_589e61 : nop
        push esi
        call public_5b7e1d
        add esp, 4
        pop ebp
        pop ebx
        public_589e6c : nop
        mov al, byte ptr ds : [edi+0x39C]
        xor esi, esi
        test al, al
        mov dword ptr ds : [edi+0x334], esi
        je public_589e87
        push edi
        call public_59d960
        add esp, 4
        public_589e87 : nop
        mov eax, dword ptr ds : [edi+0x370]
        cmp eax, esi
        je public_589ea7
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [edi+0x370], esi
        mov dword ptr ds : [edi+0x374], esi
        public_589ea7 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x589d50)
    }
}

#undef public_589daf
#undef public_589de5
#undef public_589e20
#undef public_589e30
#undef public_589e61
#undef public_589e6c
#undef public_589e87
#undef public_589ea7
