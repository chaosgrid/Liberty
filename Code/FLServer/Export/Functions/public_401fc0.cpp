#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401fc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_419b0b);

#define public_402084 _public_402084
#define public_402090 _public_402090
#define public_40209a _public_40209a
#define public_4020b2 _public_4020b2
#define public_4020b4 _public_4020b4

PROC_DECLARE(0x401fc0, internal_401fc0, public_401fc0);
extern "C" NAKED register_t __cdecl internal_401fc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_419b0b @0x401fc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419b0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x104
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x11C]
        test esi, esi
        mov ebx, ecx
        je public_4020b2
        cmp byte ptr ds : [esi], 0
        je public_4020b2
        push edi
        lea ecx, ss:[esp+0xC]
        call public_418aaa
        lea eax, ss:[esp+0xC]
        push 0xF027
        push eax
        mov dword ptr ss : [esp+0x120], 0
        call public_40ae40
        mov ax, word ptr ds : [public_427832]
        mov ecx, dword ptr ds : [public_427830]
        xor edx, edx
        mov dl, al
        and ecx, 0xFFFF
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        movzx eax, ah
        and edx, 0xFF
        push edx
        push eax
        push esi
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call dword ptr ds : [public_41b964]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0x20
        lea edi, ss:[esp+0x10]
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x100
        pop edi
        lea eax, ss:[esp+0xC]
        jb public_402084
        push 0xFF
        push eax
        add ebx, 0x638
        push ebx
        call dword ptr ds : [public_41b960]
        add esp, 0xC
        jmp public_40209a
        public_402084 : nop
        lea edx, ds:[ebx+0x638]
        lea ecx, ss:[esp+0xC]
        sub edx, ecx
        public_402090 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_402090
        public_40209a : nop
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x114], 0xFFFFFFFF
        call public_418aa4
        mov al, 1
        jmp public_4020b4
        public_4020b2 : nop
        xor al, al
        public_4020b4 : nop
        mov ecx, dword ptr ss : [esp+0x10C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x110
        ret 4
        UNREACHABLE_TRAP(0x401fc0)
    }
}

#undef public_402084
#undef public_402090
#undef public_40209a
#undef public_4020b2
#undef public_4020b4
