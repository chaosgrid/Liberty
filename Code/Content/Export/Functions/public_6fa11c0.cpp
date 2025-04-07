#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38a80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa11c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa13a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3d40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3d80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4180);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4300);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4f70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa122b _public_6fa122b
#define public_6fa1230 _public_6fa1230
#define public_6fa1238 _public_6fa1238
#define public_6fa124b _public_6fa124b
#define public_6fa1258 _public_6fa1258
#define public_6fa1274 _public_6fa1274
#define public_6fa1288 _public_6fa1288
#define public_6fa12eb _public_6fa12eb
#define public_6fa134f _public_6fa134f
#define public_6fa137c _public_6fa137c
#define public_6fa1380 _public_6fa1380

PROC_DECLARE(0x6fa11c0, internal_6fa11c0, public_6fa11c0);
extern "C" NAKED register_t __cdecl internal_6fa11c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6fa12eb
        test ebx, ebx
        je public_6fa122b
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6fa1230
        public_6fa122b : nop
        mov ebp, 1
        public_6fa1230 : nop
        test ebx, ebx
        jne public_6fa1238
        xor edx, edx
        jmp public_6fa124b
        public_6fa1238 : nop
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa124b : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6fa1258
        xor eax, eax
        public_6fa1258 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6fa1288
        public_6fa1274 : nop
        push ebx
        push ebp
        call public_6fa4f70
        add ebx, 0x14
        add esp, 8
        add ebp, 0x14
        cmp ebx, edi
        jne public_6fa1274
        public_6fa1288 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6fa4f70
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x14
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6fa3d40
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6fa13a0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f38a80
        inc eax
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        jmp public_6fa1380
        public_6fa12eb : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6fa134f
        lea edx, ds:[edi+0x14]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6fa3d40
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_6fa3d80
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6fa4180
        add esp, 0xC
        jmp public_6fa137c
        public_6fa134f : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFEC
        push ecx
        mov ecx, esi
        call public_6fa3d40
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFEC
        push eax
        push edi
        call public_6fa4300
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x14]
        push ecx
        push edi
        call public_6fa4180
        add esp, 0x18
        public_6fa137c : nop
        add dword ptr ds : [esi+8], 0x14
        public_6fa1380 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        lea edx, ds:[eax+eax*4]
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebp
        lea eax, ds:[eax+edx*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6fa11c0)
    }
}

#undef public_6fa122b
#undef public_6fa1230
#undef public_6fa1238
#undef public_6fa124b
#undef public_6fa1258
#undef public_6fa1274
#undef public_6fa1288
#undef public_6fa12eb
#undef public_6fa134f
#undef public_6fa137c
#undef public_6fa1380
