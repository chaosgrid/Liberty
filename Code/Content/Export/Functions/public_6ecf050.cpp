#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf050);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6ecf084 _public_6ecf084
#define public_6ecf08c _public_6ecf08c
#define public_6ecf09f _public_6ecf09f
#define public_6ecf0b0 _public_6ecf0b0
#define public_6ecf0d0 _public_6ecf0d0
#define public_6ecf0e0 _public_6ecf0e0
#define public_6ecf0e3 _public_6ecf0e3
#define public_6ecf0e7 _public_6ecf0e7
#define public_6ecf117 _public_6ecf117
#define public_6ecf120 _public_6ecf120
#define public_6ecf12d _public_6ecf12d
#define public_6ecf14a _public_6ecf14a
#define public_6ecf178 _public_6ecf178

PROC_DECLARE(0x6ecf050, internal_6ecf050, public_6ecf050);
extern "C" NAKED register_t __cdecl internal_6ecf050()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6f2e220
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        mov ebp, dword ptr ss : [esp+0x2C]
        je public_6ecf084
        cmp ebp, dword ptr ds : [ecx+0xC]
        jb public_6ecf084
        lea ecx, ss:[esp+0x14]
        jmp public_6ecf08c
        public_6ecf084 : nop
        mov dword ptr ss : [esp+0x18], eax
        lea ecx, ss:[esp+0x18]
        public_6ecf08c : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, eax
        je public_6ecf0b0
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6ecf09f
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6ecf09f : nop
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6f20e00
        mov ebp, dword ptr ss : [esp+0x2C]
        public_6ecf0b0 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x18], ebp
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_6ecf0e7
        lea ecx, ds:[ecx]
        public_6ecf0d0 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6ecf0e0
        mov esi, dword ptr ds : [esi]
        jmp public_6ecf0e3
        public_6ecf0e0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ecf0e3 : nop
        cmp esi, edx
        jne public_6ecf0d0
        public_6ecf0e7 : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        jne public_6ecf12d
        test al, al
        mov dword ptr ss : [esp+0x14], edi
        je public_6ecf120
        cmp edi, dword ptr ds : [ecx]
        jne public_6ecf117
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, ebx
        call public_6f7c9e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        public_6ecf117 : nop
        lea ecx, ss:[esp+0x14]
        call public_6f00610
        public_6ecf120 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x18]
        jae public_6ecf14a
        public_6ecf12d : nop
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, ebx
        call public_6f7c9e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        public_6ecf14a : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        jne public_6ecf178
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        je public_6ecf178
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ecf178 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6ecf050)
    }
}

#undef public_6ecf084
#undef public_6ecf08c
#undef public_6ecf09f
#undef public_6ecf0b0
#undef public_6ecf0d0
#undef public_6ecf0e0
#undef public_6ecf0e3
#undef public_6ecf0e7
#undef public_6ecf117
#undef public_6ecf120
#undef public_6ecf12d
#undef public_6ecf14a
#undef public_6ecf178
