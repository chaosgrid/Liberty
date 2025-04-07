#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f877c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0cbf);

#define public_6f87815 _public_6f87815
#define public_6f87829 _public_6f87829
#define public_6f87839 _public_6f87839
#define public_6f87849 _public_6f87849
#define public_6f87859 _public_6f87859
#define public_6f87869 _public_6f87869
#define public_6f87887 _public_6f87887
#define public_6f878ae _public_6f878ae
#define public_6f878bb _public_6f878bb
#define public_6f87920 _public_6f87920
#define public_6f8794b _public_6f8794b

PROC_DECLARE(0x6f877c0, internal_6f877c0, public_6f877c0);
extern "C" NAKED register_t __cdecl internal_6f877c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0cbf @0x6f877c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0cbf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0xB]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], 0
        call public_6f93460
        mov dword ptr ss : [esp+0x14], offset public_6fbc7cc
        mov eax, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x2C], 1
        je public_6f878bb
        push ebx
        push ebp
        public_6f87815 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        test ecx, ecx
        je public_6f87829
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x60], ecx
        jne public_6f878ae
        public_6f87829 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        test ecx, ecx
        je public_6f87839
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x70], ecx
        jne public_6f878ae
        public_6f87839 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        test ecx, ecx
        je public_6f87849
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x6C], ecx
        jne public_6f878ae
        public_6f87849 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        test ecx, ecx
        je public_6f87859
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x68], ecx
        jne public_6f878ae
        public_6f87859 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        test ecx, ecx
        je public_6f87869
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x3C], ecx
        jne public_6f878ae
        public_6f87869 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push 0xC
        mov ebx, eax
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6f87887
        mov ebp, eax
        public_6f87887 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x28], eax
        public_6f878ae : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x28]
        jne public_6f87815
        pop ebp
        pop ebx
        public_6f878bb : nop
        mov edi, dword ptr ss : [esp+0x34]
        mov cl, byte ptr ss : [esp+0x18]
        lea esi, ds:[edi+4]
        push 0xC
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed0230
        mov dword ptr ds : [edi], offset public_6fbc7cc
        mov dword ptr ss : [esp+0x10], 1
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], offset public_6fbc7cc
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x2C], 0
        mov esi, eax
        mov dword ptr ss : [esp+0x40], ecx
        je public_6f8794b
        mov edi, edi
        public_6f87920 : nop
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x40], esi
        jne public_6f87920
        mov eax, dword ptr ss : [esp+0x1C]
        public_6f8794b : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0x18
        UNREACHABLE_TRAP(0x6f877c0)
    }
}

#undef public_6f87815
#undef public_6f87829
#undef public_6f87839
#undef public_6f87849
#undef public_6f87859
#undef public_6f87869
#undef public_6f87887
#undef public_6f878ae
#undef public_6f878bb
#undef public_6f87920
#undef public_6f8794b
