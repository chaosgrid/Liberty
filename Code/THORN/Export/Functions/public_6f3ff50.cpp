#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ff50);
CLANG_FORWARD_PROC_SYMBOL(public_6f400b0);

#define public_6f3ff70 _public_6f3ff70
#define public_6f3ffc9 _public_6f3ffc9
#define public_6f3ffcd _public_6f3ffcd
#define public_6f3ffea _public_6f3ffea
#define public_6f40009 _public_6f40009
#define public_6f40010 _public_6f40010
#define public_6f40030 _public_6f40030
#define public_6f4004a _public_6f4004a
#define public_6f40059 _public_6f40059
#define public_6f40085 _public_6f40085
#define public_6f40093 _public_6f40093
#define public_6f400a9 _public_6f400a9

PROC_DECLARE(0x6f3ff50, internal_6f3ff50, public_6f3ff50);
extern "C" NAKED register_t __cdecl internal_6f3ff50()
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
        jle public_6f400a9
        push ebp
        push esi
        push edi
        lea ecx, ds:[ecx]
        public_6f3ff70 : nop
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
        je public_6f3ffcd
        test ecx, ecx
        je public_6f3ffcd
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp edi, eax
        setl dl
        test dl, dl
        je public_6f3ffcd
        test ebp, ebp
        je public_6f3ffc9
        mov edx, dword ptr ss : [ebp+0x10]
        cmp eax, edx
        setl al
        test al, al
        jne public_6f40009
        cmp edi, edx
        setl al
        test al, al
        je public_6f3ffc9
        mov ecx, ebp
        jmp public_6f40009
        public_6f3ffc9 : nop
        mov ecx, esi
        jmp public_6f40009
        public_6f3ffcd : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f400b0
        test al, al
        je public_6f3ffea
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_6f40009
        public_6f3ffea : nop
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6f400b0
        test al, al
        mov ecx, dword ptr ss : [esp+0x20]
        jne public_6f40009
        mov ecx, dword ptr ss : [esp+0x18]
        public_6f40009 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov esi, ebx
        nop 
        public_6f40010 : nop
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_6f40030
        test ecx, ecx
        je public_6f40030
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, dword ptr ds : [ecx+0x10]
        setl al
        test al, al
        je public_6f40030
        add esi, 4
        jmp public_6f40010
        lea esp, ss:[esp]
        public_6f40030 : nop
        sub edx, 4
        test ecx, ecx
        je public_6f4004a
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_6f4004a
        mov ebp, dword ptr ds : [ecx+0x10]
        cmp ebp, dword ptr ds : [eax+0x10]
        setl al
        test al, al
        jne public_6f40030
        public_6f4004a : nop
        cmp edx, esi
        jbe public_6f40059
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edx], edi
        add esi, 4
        jmp public_6f40010
        public_6f40059 : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov edx, esi
        sub ecx, esi
        sub edx, ebx
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_6f40085
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        push esi
        call public_6f3ff50
        mov dword ptr ss : [esp+0x34], esi
        mov edi, esi
        jmp public_6f40093
        public_6f40085 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push esi
        push ebx
        call public_6f3ff50
        mov ebx, esi
        public_6f40093 : nop
        mov eax, edi
        sub eax, ebx
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_6f3ff70
        pop edi
        pop esi
        pop ebp
        public_6f400a9 : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f3ff50)
    }
}

#undef public_6f3ff70
#undef public_6f3ffc9
#undef public_6f3ffcd
#undef public_6f3ffea
#undef public_6f40009
#undef public_6f40010
#undef public_6f40030
#undef public_6f4004a
#undef public_6f40059
#undef public_6f40085
#undef public_6f40093
#undef public_6f400a9
