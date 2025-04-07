#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fd80);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fee0);

#define public_6f3fda0 _public_6f3fda0
#define public_6f3fdf9 _public_6f3fdf9
#define public_6f3fdfd _public_6f3fdfd
#define public_6f3fe1a _public_6f3fe1a
#define public_6f3fe39 _public_6f3fe39
#define public_6f3fe40 _public_6f3fe40
#define public_6f3fe60 _public_6f3fe60
#define public_6f3fe7a _public_6f3fe7a
#define public_6f3fe89 _public_6f3fe89
#define public_6f3feb5 _public_6f3feb5
#define public_6f3fec3 _public_6f3fec3
#define public_6f3fed9 _public_6f3fed9

PROC_DECLARE(0x6f3fd80, internal_6f3fd80, public_6f3fd80);
extern "C" NAKED register_t __cdecl internal_6f3fd80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        sub eax, ebx
        sar eax, 2
        cmp eax, 0x10
        jle public_6f3fed9
        push ebp
        push esi
        push edi
        lea ecx, ds:[ecx]
        public_6f3fda0 : nop
        mov esi, dword ptr ds : [ebx]
        cdq 
        sub eax, edx
        mov dl, byte ptr ss : [esp+0x28]
        sar eax, 1
        test esi, esi
        mov ecx, dword ptr ds : [ebx+eax*4]
        mov eax, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [eax-4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ss : [esp+0x14], dl
        je public_6f3fdfd
        test ecx, ecx
        je public_6f3fdfd
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+8]
        cmp edi, eax
        setb dl
        test dl, dl
        je public_6f3fdfd
        test ebp, ebp
        je public_6f3fdf9
        mov edx, dword ptr ss : [ebp+8]
        cmp eax, edx
        setb al
        test al, al
        jne public_6f3fe39
        cmp edi, edx
        setb al
        test al, al
        je public_6f3fdf9
        mov ecx, ebp
        jmp public_6f3fe39
        public_6f3fdf9 : nop
        mov ecx, esi
        jmp public_6f3fe39
        public_6f3fdfd : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f3fee0
        test al, al
        je public_6f3fe1a
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_6f3fe39
        public_6f3fe1a : nop
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6f3fee0
        test al, al
        mov ecx, dword ptr ss : [esp+0x20]
        jne public_6f3fe39
        mov ecx, dword ptr ss : [esp+0x18]
        public_6f3fe39 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov esi, ebx
        nop 
        public_6f3fe40 : nop
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_6f3fe60
        test ecx, ecx
        je public_6f3fe60
        mov eax, dword ptr ds : [edi+8]
        cmp eax, dword ptr ds : [ecx+8]
        setb al
        test al, al
        je public_6f3fe60
        add esi, 4
        jmp public_6f3fe40
        lea esp, ss:[esp]
        public_6f3fe60 : nop
        sub edx, 4
        test ecx, ecx
        je public_6f3fe7a
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_6f3fe7a
        mov ebp, dword ptr ds : [ecx+8]
        cmp ebp, dword ptr ds : [eax+8]
        setb al
        test al, al
        jne public_6f3fe60
        public_6f3fe7a : nop
        cmp edx, esi
        jbe public_6f3fe89
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edx], edi
        add esi, 4
        jmp public_6f3fe40
        public_6f3fe89 : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edx, esi
        sub ecx, esi
        sub edx, ebx
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_6f3feb5
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        push esi
        call public_6f3fd80
        mov dword ptr ss : [esp+0x34], esi
        mov edi, esi
        jmp public_6f3fec3
        public_6f3feb5 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push esi
        push ebx
        call public_6f3fd80
        mov ebx, esi
        public_6f3fec3 : nop
        mov eax, edi
        sub eax, ebx
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_6f3fda0
        pop edi
        pop esi
        pop ebp
        public_6f3fed9 : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f3fd80)
    }
}

#undef public_6f3fda0
#undef public_6f3fdf9
#undef public_6f3fdfd
#undef public_6f3fe1a
#undef public_6f3fe39
#undef public_6f3fe40
#undef public_6f3fe60
#undef public_6f3fe7a
#undef public_6f3fe89
#undef public_6f3feb5
#undef public_6f3fec3
#undef public_6f3fed9
