#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68055c0);
CLANG_FORWARD_PROC_SYMBOL(public_680a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_680a610);
CLANG_FORWARD_PROC_SYMBOL(public_680a670);

#define public_680a3fb _public_680a3fb
#define public_680a403 _public_680a403
#define public_680a435 _public_680a435
#define public_680a47d _public_680a47d
#define public_680a4a0 _public_680a4a0
#define public_680a4a9 _public_680a4a9
#define public_680a4ef _public_680a4ef
#define public_680a50d _public_680a50d
#define public_680a520 _public_680a520
#define public_680a53e _public_680a53e
#define public_680a559 _public_680a559
#define public_680a56c _public_680a56c
#define public_680a587 _public_680a587
#define public_680a59b _public_680a59b
#define public_680a5db _public_680a5db
#define public_680a5e9 _public_680a5e9
#define public_680a601 _public_680a601

PROC_DECLARE(0x680a3e0, internal_680a3e0, public_680a3e0);
extern "C" NAKED register_t __cdecl internal_680a3e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebx, ebp
        push esi
        push edi
        jge public_680a601
        mov esi, dword ptr ss : [esp+0x18]
        jmp public_680a403
        public_680a3fb : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x1C]
        public_680a403 : nop
        push ebx
        push esi
        call public_68055c0
        add esp, 8
        push eax
        push ebp
        push esi
        call public_68055c0
        add esp, 8
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_680a670
        add esp, 0xC
        test eax, eax
        je public_680a435
        push ebp
        push ebx
        push esi
        call public_680a610
        add esp, 0xC
        public_680a435 : nop
        mov eax, ebp
        sub eax, ebx
        cmp eax, 1
        mov dword ptr ss : [esp+0x10], eax
        je public_680a601
        lea eax, ds:[ebx+ebp]
        cdq 
        sub eax, edx
        mov edi, eax
        sar edi, 1
        push edi
        push esi
        call public_68055c0
        push ebx
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call public_68055c0
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edx
        call public_680a670
        add esp, 0x1C
        test eax, eax
        je public_680a47d
        push edi
        push ebx
        jmp public_680a4a0
        public_680a47d : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ebp
        push esi
        call public_68055c0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        push eax
        push ecx
        call public_680a670
        add esp, 0xC
        test eax, eax
        je public_680a4a9
        push ebp
        push edi
        public_680a4a0 : nop
        push esi
        call public_680a610
        add esp, 0xC
        public_680a4a9 : nop
        cmp dword ptr ss : [esp+0x10], 2
        je public_680a601
        mov eax, dword ptr ds : [public_680e604]
        mov ebx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edi
        push esi
        mov dword ptr ds : [eax], edx
        call public_68055c0
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        dec ebp
        push ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        push edi
        push esi
        mov dword ptr ds : [ecx+0xC], eax
        call public_680a610
        mov edi, dword ptr ss : [esp+0x30]
        add esp, 0x14
        public_680a4ef : nop
        push ebx
        inc edi
        push edi
        push esi
        call public_68055c0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        push eax
        push ecx
        call public_680a670
        add esp, 0xC
        test eax, eax
        je public_680a53e
        public_680a50d : nop
        cmp edi, dword ptr ss : [esp+0x20]
        jle public_680a520
/*FIXUP push offset public_680e320 @0x680a513*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e320
        call public_6802e00
        add esp, 4
        public_680a520 : nop
        push ebx
        inc edi
        push edi
        push esi
        call public_68055c0
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        push eax
        push edx
        call public_680a670
        add esp, 0xC
        test eax, eax
        jne public_680a50d
        public_680a53e : nop
        dec ebp
        push ebp
        push esi
        call public_68055c0
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ebx
        push eax
        call public_680a670
        add esp, 0x14
        test eax, eax
        je public_680a587
        public_680a559 : nop
        cmp ebp, dword ptr ss : [esp+0x1C]
        jge public_680a56c
/*FIXUP push offset public_680e320 @0x680a55f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e320
        call public_6802e00
        add esp, 4
        public_680a56c : nop
        dec ebp
        push ebp
        push esi
        call public_68055c0
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ebx
        push ecx
        call public_680a670
        add esp, 0x14
        test eax, eax
        jne public_680a559
        public_680a587 : nop
        cmp ebp, edi
        jl public_680a59b
        push ebp
        push edi
        push esi
        call public_680a610
        add esp, 0xC
        jmp public_680a4ef
        public_680a59b : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edi
        lea eax, ds:[edx-1]
        push eax
        push esi
        call public_680a610
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        add ecx, 0xFFFFFFF0
        mov dword ptr ds : [eax], ecx
        mov eax, ebx
        mov ecx, edi
        sub eax, edi
        sub ecx, ebp
        add esp, 0xC
        cmp ecx, eax
        jge public_680a5db
        dec edi
        lea edx, ds:[edi+2]
        mov eax, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov ebp, edx
        jmp public_680a5e9
        public_680a5db : nop
        lea eax, ds:[edi+1]
        lea ecx, ds:[eax-2]
        mov edi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        mov ebx, ecx
        public_680a5e9 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push edi
        push eax
        push esi
        call public_680a3e0
        add esp, 0x10
        cmp ebp, ebx
        jl public_680a3fb
        public_680a601 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x680a3e0)
    }
}

#undef public_680a3fb
#undef public_680a403
#undef public_680a435
#undef public_680a47d
#undef public_680a4a0
#undef public_680a4a9
#undef public_680a4ef
#undef public_680a50d
#undef public_680a520
#undef public_680a53e
#undef public_680a559
#undef public_680a56c
#undef public_680a587
#undef public_680a59b
#undef public_680a5db
#undef public_680a5e9
#undef public_680a601
