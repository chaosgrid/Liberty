#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafd67);

#define public_6f6a942 _public_6f6a942
#define public_6f6a94d _public_6f6a94d
#define public_6f6a953 _public_6f6a953
#define public_6f6a980 _public_6f6a980
#define public_6f6a98e _public_6f6a98e
#define public_6f6a998 _public_6f6a998
#define public_6f6aa17 _public_6f6aa17
#define public_6f6aaa1 _public_6f6aaa1
#define public_6f6aabe _public_6f6aabe

PROC_DECLARE(0x6f6a880, internal_6f6a880, public_6f6a880);
extern "C" NAKED register_t __cdecl internal_6f6a880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafd67 @0x6f6a882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafd67
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push ebx
        mov dword ptr ss : [esp+0x18], ebp
        call public_6f21fd0
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], eax
        lea esi, ds:[ebx+8]
        lea edi, ss:[ebp+8]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [ebp+0x3C], ecx
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], edx
        mov eax, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], ecx
        mov edx, dword ptr ds : [ebx+0x4C]
        lea eax, ds:[ebx+0x50]
        lea ecx, ss:[ebp+0x50]
        push eax
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [ebp+0x4C], edx
        call public_6eb35b0
        lea ecx, ds:[ebx+0x60]
        push ecx
        lea ecx, ss:[ebp+0x60]
        mov byte ptr ss : [esp+0x28], 1
        call public_6ef7e30
        mov edx, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x6C], edx
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [ebp+0x70], eax
        mov ecx, dword ptr ds : [ebx+0x74]
        mov dword ptr ss : [ebp+0x74], ecx
        mov dl, byte ptr ds : [ebx+0x78]
        mov byte ptr ss : [ebp+0x78], dl
        mov eax, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x7C], eax
        mov cl, byte ptr ds : [ebx+0x80]
        mov byte ptr ss : [ebp+0x80], cl
        mov ecx, dword ptr ds : [ebx+0x84]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], 2
        jne public_6f6a942
        xor eax, eax
        jmp public_6f6a94d
        public_6f6a942 : nop
        mov eax, dword ptr ds : [ebx+0x88]
        sub eax, ecx
        sar eax, 3
        public_6f6a94d : nop
        test eax, eax
        jge public_6f6a953
        xor eax, eax
        public_6f6a953 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x84], eax
        mov edx, dword ptr ds : [ebx+0x88]
        mov ecx, dword ptr ds : [ebx+0x84]
        add esp, 4
        cmp ecx, edx
        je public_6f6a998
        lea esp, ss:[esp]
        public_6f6a980 : nop
        test eax, eax
        je public_6f6a98e
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6f6a98e : nop
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_6f6a980
        public_6f6a998 : nop
        mov dword ptr ss : [ebp+0x88], eax
        mov dword ptr ss : [ebp+0x8C], eax
        lea esi, ds:[ebx+0x90]
        lea edi, ss:[ebp+0x90]
        mov ecx, 9
        rep movsd
        lea eax, ds:[ebx+0xB4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0xB4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ebx+0xC0]
        mov dword ptr ss : [ebp+0xC0], ecx
        lea esi, ds:[ebx+0xC4]
        lea edi, ss:[ebp+0xC4]
        mov ecx, 0xD
        rep movsd
        mov edx, dword ptr ds : [ebx+0xF8]
        mov dword ptr ss : [ebp+0xF8], edx
        mov ecx, dword ptr ds : [ebx+0xFC]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 3
        mov dword ptr ss : [ebp+0xFC], ecx
        je public_6f6aa17
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f6aa17 : nop
        mov ecx, dword ptr ds : [ebx+0x100]
        mov dword ptr ss : [ebp+0x100], ecx
        mov edx, dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [ebp+0x104], edx
        mov eax, dword ptr ds : [ebx+0x108]
        mov dword ptr ss : [ebp+0x108], eax
        mov ecx, dword ptr ds : [ebx+0x10C]
        mov dword ptr ss : [ebp+0x10C], ecx
        mov edx, dword ptr ds : [ebx+0x110]
        mov dword ptr ss : [ebp+0x110], edx
        mov eax, dword ptr ds : [ebx+0x114]
        mov dword ptr ss : [ebp+0x114], eax
        mov cl, byte ptr ds : [ebx+0x118]
        lea edi, ss:[ebp+0x118]
        push 0xC
        mov byte ptr ss : [esp+0x28], 4
        mov byte ptr ds : [edi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ds : [ebx+0x11C]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x2C], edx
        je public_6f6aabe
        public_6f6aaa1 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[esi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6f1e390
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_6f6aaa1
        public_6f6aabe : nop
        lea esi, ds:[ebx+0x124]
        lea edi, ss:[ebp+0x124]
        mov ecx, 0xF6
        rep movsd
        mov eax, dword ptr ds : [ebx+0x4FC]
        mov dword ptr ss : [ebp+0x4FC], eax
        mov ecx, dword ptr ds : [ebx+0x500]
        pop edi
        mov dword ptr ss : [ebp+0x500], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f6a880)
    }
}

#undef public_6f6a942
#undef public_6f6a94d
#undef public_6f6a953
#undef public_6f6a980
#undef public_6f6a98e
#undef public_6f6a998
#undef public_6f6aa17
#undef public_6f6aaa1
#undef public_6f6aabe
