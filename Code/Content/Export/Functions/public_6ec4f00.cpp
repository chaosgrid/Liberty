#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaec8);

#define public_6ec4f72 _public_6ec4f72
#define public_6ec4faa _public_6ec4faa
#define public_6ec4fc3 _public_6ec4fc3
#define public_6ec5023 _public_6ec5023
#define public_6ec5037 _public_6ec5037
#define public_6ec5059 _public_6ec5059
#define public_6ec50cb _public_6ec50cb
#define public_6ec50d0 _public_6ec50d0
#define public_6ec50f6 _public_6ec50f6
#define public_6ec50fa _public_6ec50fa

PROC_DECLARE(0x6ec4f00, internal_6ec4f00, public_6ec4f00);
extern "C" NAKED register_t __cdecl internal_6ec4f00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaec8 @0x6ec4f02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaec8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0xE]
        push eax
        mov esi, ecx
        xor ebp, ebp
        push ebp
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6f1f4f0
        mov ecx, dword ptr ds : [esi+4]
        lea edi, ds:[esi+0xC]
        add ecx, 0xEC
        push edi
        mov dword ptr ss : [esp+0x88], ebp
        call public_6fa7200
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xEC
        push edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6ec5023
        push ebx
        mov ebx, dword ptr ds : [public_6fb339c]
        public_6ec4f72 : nop
        lea edx, ss:[esp+0x14]
        push edx
        add ecx, 0x10
        push ecx
        mov dword ptr ss : [esp+0x1C], 0
        call ebx
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x10]
        add esp, 8
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6ec4faa
        mov dword ptr ss : [esp+0x14], 0
        jmp public_6ec4fc3
        public_6ec4faa : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 0x41
        jne public_6ec4fc3
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_6ec4fc3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], ecx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x3C], edx
        call public_6f003e0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        call public_6f15c70
        lea ecx, ss:[esp+0x18]
        call public_6f1fa00
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xEC
        push edi
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        jne public_6ec4f72
        pop ebx
        public_6ec5023 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_6ec5059
        mov esi, dword ptr ds : [public_6fb33b8]
        public_6ec5037 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        push edx
        add ecx, 0xC
        push ecx
        call esi
        add esp, 8
        lea ecx, ss:[esp+0x18]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x38]
        cmp ecx, eax
        jne public_6ec5037
        public_6ec5059 : nop
        cmp dword ptr ss : [esp+0x44], ebp
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec50cb
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0x38]
        jne public_6ec50cb
        cmp esi, eax
        jne public_6ec50cb
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_6ed1f10
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ds : [eax+8], eax
        call public_6f1df30
        jmp public_6ec50f6
        public_6ec50cb : nop
        cmp ecx, esi
        je public_6ec50fa
        nop 
        public_6ec50d0 : nop
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f7b880
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6f20e00
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6ec50d0
        public_6ec50f6 : nop
        mov eax, dword ptr ss : [esp+0x38]
        public_6ec50fa : nop
        push eax
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x4C], ebp
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x84]
        add esp, 8
        pop edi
        pop esi
        mov al, 1
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x6ec4f00)
    }
}

#undef public_6ec4f72
#undef public_6ec4faa
#undef public_6ec4fc3
#undef public_6ec5023
#undef public_6ec5037
#undef public_6ec5059
#undef public_6ec50cb
#undef public_6ec50d0
#undef public_6ec50f6
#undef public_6ec50fa
