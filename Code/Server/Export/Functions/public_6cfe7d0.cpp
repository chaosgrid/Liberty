#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e19);

#define public_6cfe867 _public_6cfe867
#define public_6cfe869 _public_6cfe869
#define public_6cfe86f _public_6cfe86f
#define public_6cfe8b8 _public_6cfe8b8
#define public_6cfe8d4 _public_6cfe8d4
#define public_6cfe8df _public_6cfe8df
#define public_6cfe8f8 _public_6cfe8f8
#define public_6cfe904 _public_6cfe904
#define public_6cfe906 _public_6cfe906
#define public_6cfe926 _public_6cfe926
#define public_6cfe932 _public_6cfe932

PROC_DECLARE(0x6cfe7d0, internal_6cfe7d0, public_6cfe7d0);
extern "C" NAKED register_t __cdecl internal_6cfe7d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e19 @0x6cfe7d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6cfe8df
        mov cl, byte ptr ss : [esp+0x34]
        push ebx
        push edi
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [esp+0x14], cl
        push ebx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], bl
        mov dword ptr ss : [esp+0x28], ebx
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ss : [esp+0x3C]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x20], 0x15
        mov dword ptr ss : [esp+0x24], ecx
        je public_6cfe86f
        mov eax, dword ptr ds : [eax+0x28]
        cmp eax, ebx
        je public_6cfe86f
        push 0x7F0000
        push ecx
        mov ecx, eax
        call public_6d0c8d0
        cmp eax, ebx
        je public_6cfe86f
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        je public_6cfe867
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cfe869
        public_6cfe867 : nop
        xor eax, eax
        public_6cfe869 : nop
        mov edi, dword ptr ds : [eax+0xB4]
        public_6cfe86f : nop
        mov ecx, dword ptr ds : [esi+0x24]
        fild dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x28]
        xor ebx, ebx
        mov bl, byte ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x28], edi
        mov edx, dword ptr ds : [ecx]
        lea edi, ss:[esp+0x10]
        push edi
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ds : [edx+0x1C4]
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov ebx, eax
        je public_6cfe8d4
        public_6cfe8b8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d641e8]
        cmp edi, ebx
        jne public_6cfe8b8
        mov eax, dword ptr ss : [esp+0x14]
        public_6cfe8d4 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        pop edi
        pop ebx
        public_6cfe8df : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x34], edx
        je public_6cfe904
        public_6cfe8f8 : nop
        cmp word ptr ds : [eax], dx
        je public_6cfe906
        add eax, 2
        cmp eax, ecx
        jne public_6cfe8f8
        public_6cfe904 : nop
        mov eax, ecx
        public_6cfe906 : nop
        cmp eax, ecx
        jne public_6cfe932
        lea edx, ss:[esp+0x34]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6456c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cfe932
        mov ecx, dword ptr ss : [esp+0x34]
        public_6cfe926 : nop
        cmp word ptr ds : [eax], cx
        je public_6cfe932
        add eax, 2
        cmp eax, esi
        jne public_6cfe926
        public_6cfe932 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6cfe7d0)
    }
}

#undef public_6cfe867
#undef public_6cfe869
#undef public_6cfe86f
#undef public_6cfe8b8
#undef public_6cfe8d4
#undef public_6cfe8df
#undef public_6cfe8f8
#undef public_6cfe904
#undef public_6cfe906
#undef public_6cfe926
#undef public_6cfe932
