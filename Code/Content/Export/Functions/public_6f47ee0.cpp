#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f77bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faefa8);

#define public_6f47f83 _public_6f47f83
#define public_6f47f91 _public_6f47f91
#define public_6f47fb1 _public_6f47fb1
#define public_6f47fbb _public_6f47fbb
#define public_6f47fc0 _public_6f47fc0
#define public_6f47fca _public_6f47fca
#define public_6f47fd6 _public_6f47fd6
#define public_6f47fe9 _public_6f47fe9
#define public_6f47ff9 _public_6f47ff9
#define public_6f48002 _public_6f48002
#define public_6f48018 _public_6f48018

PROC_DECLARE(0x6f47ee0, internal_6f47ee0, public_6f47ee0);
extern "C" NAKED register_t __cdecl internal_6f47ee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faefa8 @0x6f47ee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faefa8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0x34]
        xor eax, eax
        test cl, cl
        mov ecx, dword ptr ds : [esi+0x18]
        sete al
        xor ebx, ebx
        cmp ecx, ebx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov edi, eax
        je public_6f48002
        mov edx, dword ptr ds : [esi+0x3C]
        cmp edx, ebx
        je public_6f48002
        mov eax, dword ptr ds : [esi+0x40]
        sub eax, edx
        sar eax, 3
        cmp eax, ebx
        je public_6f48002
        mov dl, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea edx, ss:[esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x40], ebx
        call public_6f77bd0
        mov eax, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f47ff9
        mov ecx, dword ptr ds : [esi+0x3C]
        mov esi, dword ptr ds : [esi+0x40]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push ebp
        mov dword ptr ss : [esp+0x20], esi
        public_6f47f83 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        cmp ebp, esi
        je public_6f47fe9
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        public_6f47f91 : nop
        mov esi, dword ptr ss : [ebp]
        cmp dword ptr ss : [esp+0x18], esi
        jne public_6f47fd6
        cmp dword ptr ss : [esp+0x44], esi
        jne public_6f47fd6
        cmp ecx, esi
        mov edi, dword ptr ss : [ebp+4]
        je public_6f48018
        cmp ecx, edi
        je public_6f48018
        mov ecx, dword ptr ss : [esp+0x28]
        xor dl, dl
        public_6f47fb1 : nop
        mov eax, dword ptr ds : [ecx]
        cmp eax, esi
        je public_6f47fbb
        cmp eax, edi
        jne public_6f47fc0
        public_6f47fbb : nop
        test dl, dl
        sete dl
        public_6f47fc0 : nop
        cmp eax, dword ptr ss : [esp+0x48]
        jne public_6f47fca
        test dl, dl
        jne public_6f48018
        public_6f47fca : nop
        add ecx, 0x44
        cmp ecx, ebx
        jne public_6f47fb1
        mov edi, 2
        public_6f47fd6 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x48]
        add ebp, 8
        cmp ebp, esi
        jne public_6f47f91
        mov eax, dword ptr ss : [esp+0x10]
        public_6f47fe9 : nop
        add eax, 0x44
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f47f83
        mov eax, dword ptr ss : [esp+0x28]
        pop ebp
        public_6f47ff9 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f48002 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        public_6f48018 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ds : [ecx+0x34]
        xor eax, eax
        test dl, dl
        setne al
        mov edi, eax
        jmp public_6f47fd6
        UNREACHABLE_TRAP(0x6f47ee0)
    }
}

#undef public_6f47f83
#undef public_6f47f91
#undef public_6f47fb1
#undef public_6f47fbb
#undef public_6f47fc0
#undef public_6f47fca
#undef public_6f47fd6
#undef public_6f47fe9
#undef public_6f47ff9
#undef public_6f48002
#undef public_6f48018
