#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4488d0);
CLANG_FORWARD_PROC_SYMBOL(public_449260);
CLANG_FORWARD_PROC_SYMBOL(public_44ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_4546d0);
CLANG_FORWARD_PROC_SYMBOL(public_555a40);
CLANG_FORWARD_PROC_SYMBOL(public_5593d0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec40);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9afa);

#define public_4493a2 _public_4493a2

PROC_DECLARE(0x449260, internal_449260, public_449260);
extern "C" NAKED register_t __cdecl internal_449260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9afa @0x449262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9afa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        push ebx
        mov dword ptr ss : [esp+0x10], esi
        call public_5593d0
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x30], offset public_5cbed8
        lea ecx, ds:[esi+0x4C]
        mov byte ptr ss : [esp+0x18], 1
        call public_555a40
        lea ecx, ds:[esi+0x504]
        mov byte ptr ss : [esp+0x18], 2
        call public_59ec40
        lea ecx, ds:[esi+0x1020]
        mov byte ptr ss : [esp+0x18], 3
        call public_4488d0
        mov dword ptr ds : [esi], offset public_5cbea0
        mov dword ptr ds : [esi+0x30], offset public_5cbe98
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        or eax, 0xFFFFFFFF
        lea edi, ds:[esi+0x64]
        mov ecx, 0x20
        rep stosd
        xor eax, eax
        mov dword ptr ds : [esi+0x2E4], ebx
        lea edi, ds:[esi+0xE4]
        mov ecx, 0x80
        rep stosd
        mov dword ptr ds : [esi+0x4E8], ebx
        lea edi, ds:[esi+0x2E8]
        mov ecx, 0x80
        rep stosd
        mov byte ptr ss : [esp+0x18], 4
        mov dword ptr ds : [esi+0x4EC], ebx
        mov dword ptr ds : [esi+0x4F0], ebx
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4546d0
        xor eax, eax
        mov dword ptr ds : [esi+0x4F8], ebx
        mov byte ptr ds : [esi+0x4FC], bl
        mov dword ptr ds : [esi+0x500], ebx
        mov byte ptr ds : [esi+0x514], bl
        mov byte ptr ds : [esi+0x515], bl
        mov byte ptr ds : [esi+0x516], bl
        mov byte ptr ds : [esi+0x517], bl
        lea edi, ds:[esi+0x518]
        mov ecx, 0x40
        rep stosd
        mov dword ptr ds : [esi+0x818], ebx
        lea edi, ds:[esi+0x618]
        mov ecx, 0x80
        rep stosd
        lea edi, ds:[esi+0x81C]
        mov ecx, 0x200
        rep stosd
        mov ecx, esi
        mov dword ptr ds : [esi+0x101C], ebx
        call public_44ceb0
        mov edx, 0xFFFFEF34
        lea eax, ds:[esi+0x10CC]
        lea ecx, ds:[esi+0x108C]
        sub edx, esi
        public_4493a2 : nop
        mov dword ptr ds : [ecx-0x54], ebx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+0x54], ebx
        add ecx, 4
        mov byte ptr ds : [eax-0x54], 1
        mov byte ptr ds : [eax], 1
        mov byte ptr ds : [eax+0x54], 1
        inc eax
        lea edi, ds:[edx+eax]
        cmp edi, 0x10
        jl public_4493a2
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x1088], ebx
        mov dword ptr ds : [esi+0x10DC], ebx
        mov dword ptr ds : [esi+0x1130], ebx
        mov byte ptr ds : [esi+0x1338], bl
        mov dword ptr ds : [esi+0x13A4], ebx
        mov byte ptr ds : [esi+0x1340], bl
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x449260)
    }
}

#undef public_4493a2
