#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6353510);
CLANG_FORWARD_PROC_SYMBOL(public_635da70);
CLANG_FORWARD_PROC_SYMBOL(public_635e1d0);
CLANG_FORWARD_PROC_SYMBOL(public_635e790);
CLANG_FORWARD_PROC_SYMBOL(public_635f180);
CLANG_FORWARD_PROC_SYMBOL(public_635fef0);

#define public_635ffca _public_635ffca
#define public_635ffe0 _public_635ffe0
#define public_635fffb _public_635fffb
#define public_6360016 _public_6360016
#define public_6360031 _public_6360031
#define public_636004c _public_636004c
#define public_6360065 _public_6360065

PROC_DECLARE(0x635fef0, internal_635fef0, public_635fef0);
extern "C" NAKED register_t __cdecl internal_635fef0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx+0x14]
        shr eax, 8
        and eax, 3
        lea edx, ds:[eax*8]
        sub edx, eax
        mov eax, dword ptr ds : [ecx+0x14]
        xor eax, 0x100
        push ebx
        shr eax, 8
        and eax, 3
        push ebp
        mov ebp, dword ptr ds : [ecx+edx*4+0x28]
        push esi
        lea esi, ds:[ecx+edx*4+0x18]
        lea edx, ds:[eax*8]
        sub edx, eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ebx, ds:[ecx+edx*4+0x18]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [esp+0x10], eax
        and eax, 0xFFFFFFF0
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        sub eax, edx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edi
        call public_6353510
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebp
        mov eax, dword ptr ds : [edi]
        add eax, edi
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ebx+0x10]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov edi, eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], edi
        call public_6353510
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebp
        mov edx, dword ptr ds : [edi]
        add edx, edi
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ds : [ecx+0x28], 0
        movsx eax, word ptr ds : [esi+0x1A]
        sub eax, 0
        je public_635fffb
        dec eax
        je public_635ffca
        mov dword ptr ds : [0], 0
        jmp public_6360065
        public_635ffca : nop
        movsx eax, word ptr ds : [ebx+0x1A]
        dec eax
        je public_635ffe0
        mov dword ptr ds : [0], 0
        jmp public_6360065
        public_635ffe0 : nop
        lea eax, ss:[esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push edx
        call public_635e1d0
        jmp public_6360065
        public_635fffb : nop
        movsx eax, word ptr ds : [ebx+0x1A]
        sub eax, 0
        je public_636004c
        dec eax
        je public_6360031
        dec eax
        je public_6360016
        mov dword ptr ds : [0], 0
        jmp public_6360065
        public_6360016 : nop
        lea eax, ss:[esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push edx
        call public_635da70
        jmp public_6360065
        public_6360031 : nop
        lea eax, ss:[esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push edx
        call public_635f180
        jmp public_6360065
        public_636004c : nop
        lea eax, ss:[esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push edx
        call public_635e790
        public_6360065 : nop
        mov eax, dword ptr ss : [esp+0x20]
        dec dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        dec ecx
        pop ebp
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x635fef0)
    }
}

#undef public_635ffca
#undef public_635ffe0
#undef public_635fffb
#undef public_6360016
#undef public_6360031
#undef public_636004c
#undef public_6360065
