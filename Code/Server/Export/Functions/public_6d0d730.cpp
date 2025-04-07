#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d730);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d616b9);

#define public_6d0d793 _public_6d0d793
#define public_6d0d819 _public_6d0d819
#define public_6d0d823 _public_6d0d823
#define public_6d0d852 _public_6d0d852
#define public_6d0d87f _public_6d0d87f
#define public_6d0d888 _public_6d0d888

PROC_DECLARE(0x6d0d730, internal_6d0d730, public_6d0d730);
extern "C" NAKED register_t __cdecl internal_6d0d730()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d616b9 @0x6d0d738*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d616b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        push eax
        call public_6d0c840
        mov esi, dword ptr ss : [esp+0x48]
        mov edi, eax
        mov al, byte ptr ds : [public_6d88a80]
        test al, al
        jne public_6d0d793
        test edi, edi
        je public_6d0d793
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_6d0d793
        test esi, esi
        je public_6d0d888
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_6d0d888
        public_6d0d793 : nop
        test esi, esi
        je public_6d0d888
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d0d888
        mov ax, word ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp]
        mov word ptr ss : [esp+0x10], ax
        mov al, byte ptr ss : [esp+0x44]
        push 0x14
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], edx
        mov byte ptr ss : [esp+0x1C], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x20], eax
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x30], eax
        cmp edi, eax
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x2C], ecx
        je public_6d0d823
        mov edi, dword ptr ds : [edi+0x10]
        cmp edi, eax
        je public_6d0d819
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_6d0d819
        mov eax, edi
        public_6d0d819 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov dword ptr ss : [esp+0x30], eax
        public_6d0d823 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x17C]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x188]
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6d0d87f
        public_6d0d852 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6d0d852
        mov eax, dword ptr ss : [esp+0x1C]
        public_6d0d87f : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d0d888 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6d0d730)
    }
}

#undef public_6d0d793
#undef public_6d0d819
#undef public_6d0d823
#undef public_6d0d852
#undef public_6d0d87f
#undef public_6d0d888
