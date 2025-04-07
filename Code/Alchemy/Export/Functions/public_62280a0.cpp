#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222f30);
CLANG_FORWARD_PROC_SYMBOL(public_6227c70);
CLANG_FORWARD_PROC_SYMBOL(public_62280a0);
CLANG_FORWARD_JUMP_SYMBOL(public_62490f8);

#define public_62280fb _public_62280fb
#define public_62280fd _public_62280fd
#define public_622812b _public_622812b
#define public_6228176 _public_6228176
#define public_6228182 _public_6228182
#define public_6228197 _public_6228197
#define public_62281a1 _public_62281a1

PROC_DECLARE(0x62280a0, internal_62280a0, public_62280a0);
extern "C" NAKED register_t __cdecl internal_62280a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62490f8 @0x62280a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62490f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        xor ebp, ebp
        or esi, 0xFFFFFFFF
        cmp edi, ebp
        je public_6228182
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0x10]
        push 4
        push eax
        call public_6222f30
        mov esi, eax
        cmp esi, ebp
        jge public_62280fb
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_62280fb : nop
        xor eax, eax
        public_62280fd : nop
        movsx ecx, byte ptr ss : [esp+eax+0x10]
        mov dword ptr ss : [esp+eax*4+0x14], ecx
        inc eax
        cmp eax, 3
        jl public_62280fd
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        push edi
        call dword ptr ds : [edx+0x24]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jns public_6228182
        xor ebx, ebx
        public_622812b : nop
        mov dword ptr ss : [esp+0x34], ebp
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x34]
        push edx
        push ebx
        push edi
        mov dword ptr ss : [esp+0x34], ebp
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        push ecx
        push edx
        call public_6227c70
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0xC
        cmp esi, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        jl public_6228197
        cmp eax, ebp
        je public_6228176
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x34], ebp
        public_6228176 : nop
        inc ebx
        cmp ebx, 9
        jl public_622812b
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x18]
        public_6228182 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6228197 : nop
        cmp eax, ebp
        je public_62281a1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_62281a1 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62280a0)
    }
}

#undef public_62280fb
#undef public_62280fd
#undef public_622812b
#undef public_6228176
#undef public_6228182
#undef public_6228197
#undef public_62281a1
