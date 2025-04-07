#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626bb10);
CLANG_FORWARD_PROC_SYMBOL(public_6273300);
CLANG_FORWARD_PROC_SYMBOL(public_6273590);
CLANG_FORWARD_PROC_SYMBOL(public_62736c0);
CLANG_FORWARD_PROC_SYMBOL(public_62738f0);
CLANG_FORWARD_PROC_SYMBOL(public_6273a50);
CLANG_FORWARD_PROC_SYMBOL(public_6273b30);
CLANG_FORWARD_PROC_SYMBOL(public_6273bf0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392648);

#define public_626bb38 _public_626bb38
#define public_626bb62 _public_626bb62
#define public_626bb6b _public_626bb6b
#define public_626bb78 _public_626bb78
#define public_626bb86 _public_626bb86
#define public_626bbb0 _public_626bbb0
#define public_626bbd8 _public_626bbd8
#define public_626bc02 _public_626bc02
#define public_626bc0b _public_626bc0b
#define public_626bc18 _public_626bc18
#define public_626bc26 _public_626bc26
#define public_626bc50 _public_626bc50
#define public_626bc78 _public_626bc78
#define public_626bca2 _public_626bca2
#define public_626bcab _public_626bcab
#define public_626bcb8 _public_626bcb8
#define public_626bcc6 _public_626bcc6
#define public_626bcf0 _public_626bcf0
#define public_626bd18 _public_626bd18
#define public_626bd42 _public_626bd42
#define public_626bd4b _public_626bd4b
#define public_626bd58 _public_626bd58
#define public_626bd66 _public_626bd66
#define public_626bd90 _public_626bd90
#define public_626bdb8 _public_626bdb8
#define public_626bde2 _public_626bde2
#define public_626bdeb _public_626bdeb
#define public_626bdf8 _public_626bdf8
#define public_626be06 _public_626be06
#define public_626be30 _public_626be30
#define public_626be58 _public_626be58
#define public_626be82 _public_626be82
#define public_626be8b _public_626be8b
#define public_626be98 _public_626be98
#define public_626bea6 _public_626bea6
#define public_626bed0 _public_626bed0
#define public_626bef8 _public_626bef8
#define public_626bf22 _public_626bf22
#define public_626bf2b _public_626bf2b
#define public_626bf38 _public_626bf38
#define public_626bf46 _public_626bf46
#define public_626bf70 _public_626bf70
#define public_626bf98 _public_626bf98
#define public_626bfc2 _public_626bfc2
#define public_626bfcb _public_626bfcb
#define public_626bfd8 _public_626bfd8
#define public_626bfe6 _public_626bfe6

PROC_DECLARE(0x626bb10, internal_626bb10, public_626bb10);
/* CHUNK of public_6261330 */
extern "C" NAKED register_t __cdecl internal_626bb10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626bb12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626bb38 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626bb6b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626bb6b
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626bb62
        mov ecx, ebx
        call public_6273300
        push ebx
        call public_6391d5a
        add esp, 4
        public_626bb62 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626bb38
        public_626bb6b : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626bb86
        public_626bb78 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626bb78
        public_626bb86 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_626bbb0 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626bbb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626bbd8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626bc0b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626bc0b
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626bc02
        mov ecx, ebx
        call public_62a8920
        push ebx
        call public_6391d5a
        add esp, 4
        public_626bc02 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626bbd8
        public_626bc0b : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626bc26
        public_626bc18 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626bc18
        public_626bc26 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_626bc50 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626bc52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626bc78 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626bcab
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626bcab
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626bca2
        mov ecx, ebx
        call public_6273590
        push ebx
        call public_6391d5a
        add esp, 4
        public_626bca2 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626bc78
        public_626bcab : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626bcc6
        public_626bcb8 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626bcb8
        public_626bcc6 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_626bcf0 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626bcf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626bd18 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626bd4b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626bd4b
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626bd42
        mov ecx, ebx
        call public_62736c0
        push ebx
        call public_6391d5a
        add esp, 4
        public_626bd42 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626bd18
        public_626bd4b : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626bd66
        public_626bd58 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626bd58
        public_626bd66 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_626bd90 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626bd92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626bdb8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626bdeb
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626bdeb
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626bde2
        mov ecx, ebx
        call public_62738f0
        push ebx
        call public_6391d5a
        add esp, 4
        public_626bde2 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626bdb8
        public_626bdeb : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626be06
        public_626bdf8 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626bdf8
        public_626be06 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_626be30 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626be32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626be58 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626be8b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626be8b
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626be82
        mov ecx, ebx
        call public_6273a50
        push ebx
        call public_6391d5a
        add esp, 4
        public_626be82 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626be58
        public_626be8b : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626bea6
        public_626be98 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626be98
        public_626bea6 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_626bed0 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626bed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626bef8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626bf2b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626bf2b
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626bf22
        mov ecx, ebx
        call public_6273b30
        push ebx
        call public_6391d5a
        add esp, 4
        public_626bf22 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626bef8
        public_626bf2b : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626bf46
        public_626bf38 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626bf38
        public_626bf46 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_626bf70 : nop
        push 0xFFFFFFFF
/*FIXUP push public_6392648 @0x626bf72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        xor edi, edi
        push ebx
        public_626bf98 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_626bfcb
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_626bfcb
        mov ebx, dword ptr ds : [ecx+edi*4]
        cmp ebx, ebp
        je public_626bfc2
        mov ecx, ebx
        call public_6273bf0
        push ebx
        call public_6391d5a
        add esp, 4
        public_626bfc2 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        jmp public_626bf98
        public_626bfcb : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_626bfe6
        public_626bfd8 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626bfd8
        public_626bfe6 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x626bb10)
        ASM_EXPORT_ENTRY_FIRST(0x626bb38, public_626bb38)
        ASM_EXPORT_ENTRY(0x626bb62, public_626bb62)
        ASM_EXPORT_ENTRY(0x626bb6b, public_626bb6b)
        ASM_EXPORT_ENTRY(0x626bb78, public_626bb78)
        ASM_EXPORT_ENTRY(0x626bb86, public_626bb86)
        ASM_EXPORT_ENTRY(0x626bbb0, public_626bbb0)
        ASM_EXPORT_ENTRY(0x626bbd8, public_626bbd8)
        ASM_EXPORT_ENTRY(0x626bc02, public_626bc02)
        ASM_EXPORT_ENTRY(0x626bc0b, public_626bc0b)
        ASM_EXPORT_ENTRY(0x626bc18, public_626bc18)
        ASM_EXPORT_ENTRY(0x626bc26, public_626bc26)
        ASM_EXPORT_ENTRY(0x626bc50, public_626bc50)
        ASM_EXPORT_ENTRY(0x626bc78, public_626bc78)
        ASM_EXPORT_ENTRY(0x626bca2, public_626bca2)
        ASM_EXPORT_ENTRY(0x626bcab, public_626bcab)
        ASM_EXPORT_ENTRY(0x626bcb8, public_626bcb8)
        ASM_EXPORT_ENTRY(0x626bcc6, public_626bcc6)
        ASM_EXPORT_ENTRY(0x626bcf0, public_626bcf0)
        ASM_EXPORT_ENTRY(0x626bd18, public_626bd18)
        ASM_EXPORT_ENTRY(0x626bd42, public_626bd42)
        ASM_EXPORT_ENTRY(0x626bd4b, public_626bd4b)
        ASM_EXPORT_ENTRY(0x626bd58, public_626bd58)
        ASM_EXPORT_ENTRY(0x626bd66, public_626bd66)
        ASM_EXPORT_ENTRY(0x626bd90, public_626bd90)
        ASM_EXPORT_ENTRY(0x626bdb8, public_626bdb8)
        ASM_EXPORT_ENTRY(0x626bde2, public_626bde2)
        ASM_EXPORT_ENTRY(0x626bdeb, public_626bdeb)
        ASM_EXPORT_ENTRY(0x626bdf8, public_626bdf8)
        ASM_EXPORT_ENTRY(0x626be06, public_626be06)
        ASM_EXPORT_ENTRY(0x626be30, public_626be30)
        ASM_EXPORT_ENTRY(0x626be58, public_626be58)
        ASM_EXPORT_ENTRY(0x626be82, public_626be82)
        ASM_EXPORT_ENTRY(0x626be8b, public_626be8b)
        ASM_EXPORT_ENTRY(0x626be98, public_626be98)
        ASM_EXPORT_ENTRY(0x626bea6, public_626bea6)
        ASM_EXPORT_ENTRY(0x626bed0, public_626bed0)
        ASM_EXPORT_ENTRY(0x626bef8, public_626bef8)
        ASM_EXPORT_ENTRY(0x626bf22, public_626bf22)
        ASM_EXPORT_ENTRY(0x626bf2b, public_626bf2b)
        ASM_EXPORT_ENTRY(0x626bf38, public_626bf38)
        ASM_EXPORT_ENTRY(0x626bf46, public_626bf46)
        ASM_EXPORT_ENTRY(0x626bf70, public_626bf70)
        ASM_EXPORT_ENTRY(0x626bf98, public_626bf98)
        ASM_EXPORT_ENTRY(0x626bfc2, public_626bfc2)
        ASM_EXPORT_ENTRY(0x626bfcb, public_626bfcb)
        ASM_EXPORT_ENTRY(0x626bfd8, public_626bfd8)
        ASM_EXPORT_ENTRY_LAST(0x626bfe6, public_626bfe6)
    }
}

#undef public_626bb38
#undef public_626bb62
#undef public_626bb6b
#undef public_626bb78
#undef public_626bb86
#undef public_626bbb0
#undef public_626bbd8
#undef public_626bc02
#undef public_626bc0b
#undef public_626bc18
#undef public_626bc26
#undef public_626bc50
#undef public_626bc78
#undef public_626bca2
#undef public_626bcab
#undef public_626bcb8
#undef public_626bcc6
#undef public_626bcf0
#undef public_626bd18
#undef public_626bd42
#undef public_626bd4b
#undef public_626bd58
#undef public_626bd66
#undef public_626bd90
#undef public_626bdb8
#undef public_626bde2
#undef public_626bdeb
#undef public_626bdf8
#undef public_626be06
#undef public_626be30
#undef public_626be58
#undef public_626be82
#undef public_626be8b
#undef public_626be98
#undef public_626bea6
#undef public_626bed0
#undef public_626bef8
#undef public_626bf22
#undef public_626bf2b
#undef public_626bf38
#undef public_626bf46
#undef public_626bf70
#undef public_626bf98
#undef public_626bfc2
#undef public_626bfcb
#undef public_626bfd8
#undef public_626bfe6

#pragma init_seg(compiler)
extern "C" void const* const public_626bb38 = __AsmFindLabelExport(&internal_626bb10, 0x626bb38);
extern "C" void const* const public_626bb62 = __AsmFindLabelExport(&internal_626bb10, 0x626bb62);
extern "C" void const* const public_626bb6b = __AsmFindLabelExport(&internal_626bb10, 0x626bb6b);
extern "C" void const* const public_626bb78 = __AsmFindLabelExport(&internal_626bb10, 0x626bb78);
extern "C" void const* const public_626bb86 = __AsmFindLabelExport(&internal_626bb10, 0x626bb86);
extern "C" void const* const public_626bbb0 = __AsmFindLabelExport(&internal_626bb10, 0x626bbb0);
extern "C" void const* const public_626bbd8 = __AsmFindLabelExport(&internal_626bb10, 0x626bbd8);
extern "C" void const* const public_626bc02 = __AsmFindLabelExport(&internal_626bb10, 0x626bc02);
extern "C" void const* const public_626bc0b = __AsmFindLabelExport(&internal_626bb10, 0x626bc0b);
extern "C" void const* const public_626bc18 = __AsmFindLabelExport(&internal_626bb10, 0x626bc18);
extern "C" void const* const public_626bc26 = __AsmFindLabelExport(&internal_626bb10, 0x626bc26);
extern "C" void const* const public_626bc50 = __AsmFindLabelExport(&internal_626bb10, 0x626bc50);
extern "C" void const* const public_626bc78 = __AsmFindLabelExport(&internal_626bb10, 0x626bc78);
extern "C" void const* const public_626bca2 = __AsmFindLabelExport(&internal_626bb10, 0x626bca2);
extern "C" void const* const public_626bcab = __AsmFindLabelExport(&internal_626bb10, 0x626bcab);
extern "C" void const* const public_626bcb8 = __AsmFindLabelExport(&internal_626bb10, 0x626bcb8);
extern "C" void const* const public_626bcc6 = __AsmFindLabelExport(&internal_626bb10, 0x626bcc6);
extern "C" void const* const public_626bcf0 = __AsmFindLabelExport(&internal_626bb10, 0x626bcf0);
extern "C" void const* const public_626bd18 = __AsmFindLabelExport(&internal_626bb10, 0x626bd18);
extern "C" void const* const public_626bd42 = __AsmFindLabelExport(&internal_626bb10, 0x626bd42);
extern "C" void const* const public_626bd4b = __AsmFindLabelExport(&internal_626bb10, 0x626bd4b);
extern "C" void const* const public_626bd58 = __AsmFindLabelExport(&internal_626bb10, 0x626bd58);
extern "C" void const* const public_626bd66 = __AsmFindLabelExport(&internal_626bb10, 0x626bd66);
extern "C" void const* const public_626bd90 = __AsmFindLabelExport(&internal_626bb10, 0x626bd90);
extern "C" void const* const public_626bdb8 = __AsmFindLabelExport(&internal_626bb10, 0x626bdb8);
extern "C" void const* const public_626bde2 = __AsmFindLabelExport(&internal_626bb10, 0x626bde2);
extern "C" void const* const public_626bdeb = __AsmFindLabelExport(&internal_626bb10, 0x626bdeb);
extern "C" void const* const public_626bdf8 = __AsmFindLabelExport(&internal_626bb10, 0x626bdf8);
extern "C" void const* const public_626be06 = __AsmFindLabelExport(&internal_626bb10, 0x626be06);
extern "C" void const* const public_626be30 = __AsmFindLabelExport(&internal_626bb10, 0x626be30);
extern "C" void const* const public_626be58 = __AsmFindLabelExport(&internal_626bb10, 0x626be58);
extern "C" void const* const public_626be82 = __AsmFindLabelExport(&internal_626bb10, 0x626be82);
extern "C" void const* const public_626be8b = __AsmFindLabelExport(&internal_626bb10, 0x626be8b);
extern "C" void const* const public_626be98 = __AsmFindLabelExport(&internal_626bb10, 0x626be98);
extern "C" void const* const public_626bea6 = __AsmFindLabelExport(&internal_626bb10, 0x626bea6);
extern "C" void const* const public_626bed0 = __AsmFindLabelExport(&internal_626bb10, 0x626bed0);
extern "C" void const* const public_626bef8 = __AsmFindLabelExport(&internal_626bb10, 0x626bef8);
extern "C" void const* const public_626bf22 = __AsmFindLabelExport(&internal_626bb10, 0x626bf22);
extern "C" void const* const public_626bf2b = __AsmFindLabelExport(&internal_626bb10, 0x626bf2b);
extern "C" void const* const public_626bf38 = __AsmFindLabelExport(&internal_626bb10, 0x626bf38);
extern "C" void const* const public_626bf46 = __AsmFindLabelExport(&internal_626bb10, 0x626bf46);
extern "C" void const* const public_626bf70 = __AsmFindLabelExport(&internal_626bb10, 0x626bf70);
extern "C" void const* const public_626bf98 = __AsmFindLabelExport(&internal_626bb10, 0x626bf98);
extern "C" void const* const public_626bfc2 = __AsmFindLabelExport(&internal_626bb10, 0x626bfc2);
extern "C" void const* const public_626bfcb = __AsmFindLabelExport(&internal_626bb10, 0x626bfcb);
extern "C" void const* const public_626bfd8 = __AsmFindLabelExport(&internal_626bb10, 0x626bfd8);
extern "C" void const* const public_626bfe6 = __AsmFindLabelExport(&internal_626bb10, 0x626bfe6);
