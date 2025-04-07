#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);
CLANG_FORWARD_PROC_SYMBOL(public_6f930a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f930d0 _public_6f930d0
#define public_6f930e0 _public_6f930e0
#define public_6f930e3 _public_6f930e3
#define public_6f930e7 _public_6f930e7
#define public_6f9310f _public_6f9310f
#define public_6f93162 _public_6f93162
#define public_6f9316f _public_6f9316f
#define public_6f93197 _public_6f93197
#define public_6f931a5 _public_6f931a5

PROC_DECLARE(0x6f930a0, internal_6f930a0, public_6f930a0);
extern "C" NAKED register_t __cdecl internal_6f930a0()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], 0
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ecx
        mov al, 1
        je public_6f930e7
        lea esp, ss:[esp]
        public_6f930d0 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov ebp, esi
        je public_6f930e0
        mov esi, dword ptr ds : [esi]
        jmp public_6f930e3
        public_6f930e0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f930e3 : nop
        cmp esi, ecx
        jne public_6f930d0
        public_6f930e7 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6f9310f
        lea ecx, ss:[esp+0x24]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6f21210
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        add eax, 0x10
        pop ebp
        add esp, 0x28
        ret 4
        public_6f9310f : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f9316f
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f93162
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x4C], 1
        call public_6f21210
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6fa6e80
        mov edx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        lea eax, ds:[edx+0x10]
        pop ebp
        add esp, 0x28
        ret 4
        public_6f93162 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f00610
        mov edx, dword ptr ss : [esp+0x24]
        public_6f9316f : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0xC], edx
        jge public_6f93197
        lea ecx, ss:[esp+0xE]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x22], 1
        call public_6f21210
        jmp public_6f931a5
        public_6f93197 : nop
        lea edx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], 0
        push edx
        lea eax, ss:[esp+0x14]
        public_6f931a5 : nop
        lea ecx, ss:[esp+0x30]
        push eax
        call public_6fa6e80
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        lea eax, ds:[ecx+0x10]
        pop ebp
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6f930a0)
    }
}

#undef public_6f930d0
#undef public_6f930e0
#undef public_6f930e3
#undef public_6f930e7
#undef public_6f9310f
#undef public_6f93162
#undef public_6f9316f
#undef public_6f93197
#undef public_6f931a5
